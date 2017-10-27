//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#pragma once

#include "Capacitor.h"
#include "CI.h"
#include "LED.h"
#include "Resistencia.h"
#include "Bluetooth.h"
#include "ZigBee.h"
#include "Bateria.h"
#include "Eliminador.h"
#include "Arduino.h"
#include "SparkFun.h"

using namespace std;

template <class T>
class Almacen
{   int elementos[16];
    T* almacen;
    
public:
    unsigned short ventasDeProductos[10];
    
    Almacen();
    Almacen(int tamanio);
    Almacen(const Almacen& original);
    ~Almacen();
    
    int numeroElementos();
    void agregar(unsigned short ID, unsigned short cantidad);
    void agregar(T producto);
    void eliminar(string pCodigo);
    void inventario();
    void print(unsigned short ID);
    void comprar(Almacen<T>& carrito, unsigned short op, unsigned short ID, unsigned short cantidad);
    unsigned short ventas(short s);
    void caducados();
    void eliminarCaducados();
    void buscar(string pBuscar, unsigned short indexLista, unsigned short cantidad);
    float precioTotal();
};

//////////////////////////////////////////////////

template <class T>
Almacen<T>::Almacen(){
    elementos[0] = 0;
}

template <class T>
Almacen<T>::Almacen(int tamanio){
    elementos[0] = tamanio;
    almacen = new T[elementos[0]];
}

template <class T>
Almacen<T>::Almacen(const Almacen& original){
    elementos[0] = original.elementos;
    almacen = new T[elementos[0]];
    for(short i=0; i<elementos[0]; i++){
        almacen[i] = original.almacen[i];
    }
}

template <class T>
Almacen<T>::~Almacen(){
    delete []almacen;
}

template <class T>
int Almacen<T>::numeroElementos(){
    return elementos[0];
}

template <class T>
void Almacen<T>::agregar(unsigned short ID, unsigned short cantidad){
    elementos[0] += cantidad;
    
    T* temporal = new T[elementos[0]];
    for(short i=0; i<elementos[0]-cantidad; i++){
        temporal[i] = almacen[i];
    }
    for(short i=elementos[0]-cantidad; i<elementos[0]; i++){
        getchar();getchar();
        switch(ID){
            case 0:     temporal[i] = Capacitor();
                        elementos[5]++; elementos[1]++;
                        break;
            case 1:     temporal[i] = CI();
                        elementos[6]++; elementos[1]++;
                        break;
            case 2:     temporal[i] = LED();
                        elementos[7]++; elementos[1]++;
                        break;
            case 3:     temporal[i] = Resistencia();
                        elementos[8]++; elementos[1]++;
                        break;
            case 4:     temporal[i] = Bluetooth();
                        elementos[9]++; elementos[2]++;
                        break;
            case 5:     temporal[i] = ZigBee();
                        elementos[10]++; elementos[2]++;
                        break;
            case 6:     temporal[i] = Bateria();
                        elementos[11]++; elementos[3]++;
                        break;
            case 7:     temporal[i] = Eliminador();
                        elementos[12]++; elementos[3]++;
                        break;
            case 8:     temporal[i] = Arduino();
                        elementos[13]++; elementos[4]++;
                        break;
            case 9:     temporal[i] = SparkFun();
                        elementos[14]++; elementos[4]++;
                        break;
            default:    break;
        }
    }
    delete []almacen;
    almacen = temporal;
}

template <class T>
void Almacen<T>::agregar(T producto){
    T* temporal;
    
    elementos[0]++;
    temporal = new T[elementos[0]];
    for(short i=0; i<elementos[0]-1; i++){
        temporal[i] = almacen[i];
    }
    temporal[elementos[0]-1] = producto;
    delete []almacen;
    
    almacen = temporal;
}

template <class T>
void Almacen<T>::eliminar(string pCodigo){
    short i,j;
    T* temporal;
    
    elementos[0]--;
    temporal = new T[elementos[0]-1];
    for(i=0; i<elementos[0]; i++){
        if(almacen[i].codigo == pCodigo){
            j = i+1;
            break;
        }
        temporal[i] = almacen[i];
    }
    for(; i<elementos[0]; i++, j++){
        temporal[i] = almacen[j];
    }
    delete []almacen;
    almacen = temporal;
}

template <class T>
void Almacen<T>::inventario(){
    cout<< endl<< "\t\tAlmacen ("<< elementos[0]<< ")"
        << endl<< "\t\t----------------------------"
        << endl<< "\t\tComponentes electronicos ("<< elementos[1]<< ")"
        << endl<< "\t\tComunicacion RF ("<< elementos[2]<< ")"
        << endl<< "\t\tEnergia ("<< elementos[3]<< ")"
        << endl<< "\t\tMicrocontroladores ("<< elementos[4]<< ")"
        << endl<< "\t\t----------------------------"
        << endl<< "\t\tCapacitores ("<< elementos[5]<< ")"
        << endl<< "\t\tCircuitos integrados ("<< elementos[6]<< ")"
        << endl<< "\t\tLED's ("<< elementos[7]<< ")"
        << endl<< "\t\tResistencias ("<< elementos[8]<< ")"
        << endl<< "\t\tBluetooth ("<< elementos[9]<< ")"
        << endl<< "\t\tZigBee ("<< elementos[10]<< ")"
        << endl<< "\t\tBateria ("<< elementos[11]<< ")"
        << endl<< "\t\tEliminador ("<< elementos[12]<< ")"
        << endl<< "\t\tArduino ("<< elementos[13]<< ")"
        << endl<< "\t\tSparkFun ("<< elementos[14]<< ")"
        << endl<< "\t\t----------------------------";
    caducados();
    cout<< endl<< "\t\tCaducados ("<< elementos[15]<< ")";
}

template <class T>
void Almacen<T>::print(unsigned short ID){
    short contador=0;
    for(short i=0; i<elementos[0]; i++){
        switch(ID){
            case 0: if(almacen[i].codigo.compare(0,4,"CECE") == 0){
                        cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                            << endl<< almacen[i].descripcion
                            << endl<< almacen[i].codigo<< endl;
                    }
                    break;
                
            case 1: if(almacen[i].codigo.compare(0,4,"CECI") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 2: if(almacen[i].codigo.compare(0,4,"CELD") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 3: if(almacen[i].codigo.compare(0,4,"CERE") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 4: if(almacen[i].codigo.compare(0,4,"RFBT") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 5: if(almacen[i].codigo.compare(0,4,"RFZB") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 6: if(almacen[i].codigo.compare(0,4,"ENBD") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 7: if(almacen[i].codigo.compare(0,4,"ENEL") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 8: if(almacen[i].codigo.compare(0,4,"MCAR") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;
                
            case 9: if(almacen[i].codigo.compare(0,4,"MCSF") == 0){
                cout<< endl<< ++contador<< ". "<< almacen[i].nombre<< "\t"<< almacen[i].precio
                << endl<< almacen[i].descripcion
                << endl<< almacen[i].codigo<< endl;
            }
                break;

            default:    break;
        }
    }
}

template <class T>
void Almacen<T>::comprar(Almacen<T>& carrito, unsigned short op, unsigned short ID, unsigned short cantidad){
    short contador=0;
    for(short i=0; i<elementos[0]; i++){
        switch(ID){
            case 0: if(almacen[i].codigo.compare(0,4,"CECE") == 0){
                contador++;}
                break;
                
            case 1: if(almacen[i].codigo.compare(0,4,"CECI") == 0){
                contador++;}
                break;
                
            case 2: if(almacen[i].codigo.compare(0,4,"CELD") == 0){
                contador++;}
                break;
                
            case 3: if(almacen[i].codigo.compare(0,4,"CERE") == 0){
                contador++;}
                break;
                
            case 4: if(almacen[i].codigo.compare(0,4,"RFBT") == 0){
                contador++;}
                break;
                
            case 5: if(almacen[i].codigo.compare(0,4,"RFZB") == 0){
                contador++;}
                break;
                
            case 6: if(almacen[i].codigo.compare(0,4,"ENBD") == 0){
                contador++;}
                break;
                
            case 7: if(almacen[i].codigo.compare(0,4,"ENEL") == 0){
                contador++;}
                break;
                
            case 8: if(almacen[i].codigo.compare(0,4,"MCAR") == 0){
                contador++;}
                break;
                
            case 9: if(almacen[i].codigo.compare(0,4,"MCSF") == 0){
                contador++;}
                break;
                
            default:    break;
        }
        if(contador == op){
            for(short i=0; i<cantidad; i++){
                carrito.agregar(almacen[i]);
            }
        }
    }
}

template <class T>
unsigned short Almacen<T>::ventas(short s){
    unsigned short i=1, j=0, total=0;
        
    switch(s){
        case 0: i = 0;
                j=9;
                break;
        case 1: i = 0;
                j=3;
                break;
        case 2: i = 4;
                j=5;
                break;
        case 3: i = 6;
                j=7;
                break;
        case 4: i = 8;
                j=9;
                break;
    }
    for(;i<=j;i++){
        total += ventasDeProductos[i];
    }
    
    return total;
}

template <class T>
void Almacen<T>::caducados(){
    for(short i=0; i<elementos[0]; i++){
        if(almacen[i].caducidad() == true){
            elementos[15]++;
        }
    }
}

template <class T>
void Almacen<T>::eliminarCaducados(){
    char opcion;
    for(short i=0; i<elementos[0]; i++){
        if(almacen[i].caducidad == true){
            cout<< endl<< "\t\t"<< i+1<< ") "<< almacen[i].nombre;
        }
    }
    cout<< endl<< "\tEliminar? (y / n) ";
    cin>>opcion;
    if (opcion == 'y' || opcion == 'Y'){
        for(short i=0; i<elementos[0]; i++){
            if(almacen[i].caducidad == true){
                almacen[i].eliminar(almacen[i].pCodigo);
            }
        }
    }
}


template <class T>
void Almacen<T>::buscar(string pBuscar,unsigned short indexLista, unsigned short cantidad){
    short numeracion=0;
    
    if (indexLista == 0){
        for(short i=0; i<elementos[0]; i++){
            if(almacen[i].nombre == pBuscar){
                cout<< endl<< ++numeracion<< ". "<< almacen[i].codigo;
            }
        }
        return;
    }
    
    for(short i=0; i<elementos[0]; i++){
        if(almacen[i].nombre == pBuscar){
            numeracion++;
            if(numeracion == indexLista){
                agregar(almacen[i].ID,cantidad);
                return;
            }
        }
    }
}

template <class T>
float Almacen<T>::precioTotal(){
    float total=0;
    for(short i=0; i<elementos[0]; i++){
        total += almacen[i].precio;
    }
    return total;
}
















