//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Producto.h"

Producto::Producto(){
    cout<< endl<< "\tNombre: ";
    getline(cin, nombre);
    cout<< "\tDescripcion: ";
    getline(cin, descripcion);
    do{
        cout<< "\tPrecio: ";
        cin>> precio;
        if(precio>1000000){
            cout<< "\t\tError: $0 < precio < $1,000,000" << endl;
        }
    } while(precio>1000000);
    time(&tiempo);
}

Producto::Producto(string _nombre,string _descripcion,float _precio){
    nombre = _nombre;
    descripcion = _descripcion;
    precio = _precio;
    time(&tiempo);
}

Producto::Producto(const Producto& original){
    nombre = original.nombre;
    descripcion = original.descripcion;
    precio = original.precio;
    time(&tiempo);
}

bool Producto::caducidad(){
    time_t t;
    if(time(&t)-tiempo < 123456){
        return false;
    }
    return true;
}

void Producto::setCaducidad(){
    tiempo = 0;
}

void Producto::print(){
    cout<< endl<< endl<< nombre;
    cout<< "\t $"<< setprecision(2)<< fixed<< precio;
    cout<< endl<< descripcion;
}

Producto::~Producto(){
    
}