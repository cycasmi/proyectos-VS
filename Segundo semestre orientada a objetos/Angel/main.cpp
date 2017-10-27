//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//
//  Proyecto POO: Mi Tiendita en línea

#include "Almacen.h"

int main(){
    Almacen<Producto> almacen;
    Almacen<Producto> carrito;
    float dinero = 10000;
    char opcion;
    string pBuscar;
    unsigned short cantidad, indexLista, op;
    srand((int)time(0));
    
    do{
        if(!system("cls")){} else system("clear");
        cout<< "\t\t\tBIENVENIDO A TU TIENDITA DE ELECTRONICA"<< endl
            << endl<< "Desea comprar o ponerse en contacto con nosotros?"
            << endl<< "\t1) Comprar"
            << endl<< "\t2) Contacto"
            << endl<< "\t3) Salir"
            << endl<< "\t";
        
        cin>> opcion;
        switch(opcion){
            case '1':   do{
                            if(!system("cls")){} else system("clear");
                            cout<< "\t\t\tTIENDITA DE ELECTRONICA"<< endl
                                << endl<< "Contamos actualmente con "<< almacen.numeroElementos()<< " productos."
                                << endl<< "Elija una categoria para ver los productos."
                                << endl<< "\t1) Componentes electronicos("
                                << endl<< "\t2) Comunicacion por radiofrecuencia"
                                << endl<< "\t3) Energia"
                                << endl<< "\t4) Microcontroladores\n"
                                << endl<< "\t5) Buscar"
                                << endl<< "\t6) Mi carrito"
                                << endl<< "\t7) Regresar"
                                << endl<< "\t";
                            
                            cin>> opcion;
                            switch (opcion) {
                                case '1':   cout<< endl<< "\tCOMPONENTES ELECTRONICOS"
                                                << endl<< "\t\t1) Capacitores: "
                                                << endl<< "\t\t2) Circuitos integrados: "
                                                << endl<< "\t\t3) LED's: "
                                                << endl<< "\t\t4) Resistencias: "
                                                << endl<< "\t\t5) Regresar"
                                                << endl<< "\t\t";
                                            do{
                                                cin>>opcion;
                                                switch(opcion){
                                                    case '1':   cout<< endl<< "\t\tCAPACITORES";
                                                                almacen.print(0);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 0, cantidad);
                                                                opcion = '5';
                                                                break;
                                                
                                                    case '2':   cout<< endl<< "\t\t\tCIR. INTEGRADOS";
                                                                almacen.print(1);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 1, cantidad);
                                                                opcion = '5';
                                                                break;
                                                
                                                    case '3':   cout<< endl<< "\t\t\tLED'S";
                                                                almacen.print(2);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 2, cantidad);
                                                                opcion = '5';
                                                                break;
                                                
                                                    case '4':   cout<< endl<< "\t\t\tRESISTENCIAS";
                                                                almacen.print(3);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 3, cantidad);
                                                                opcion = '5';
                                                                break;
                                                
                                                    case '5':   break;
                                                
                                                    default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                }
                                            } while(opcion != '5');
                                            break;
                                
                                case '2':   cout<< endl<< "\t\tCOMUNICACION RF"
                                                << endl<< "\t\t\t1) Bluetooth: "
                                                << endl<< "\t\t\t2) ZigBee: "
                                                << endl<< "\t\t\t3) Regresar";
                                            do{
                                                cin>>opcion;
                                                switch(opcion){
                                                    case '1':   cout<< endl<< "\t\t\tBLUETOOTH";
                                                                almacen.print(4);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 4, cantidad);
                                                                opcion = '5';
                                                                break;
                                                        
                                                    case '2':   cout<< endl<< "\t\t\tZIGBEE";
                                                                almacen.print(5);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 5, cantidad);
                                                                opcion = '5';
                                                                break;
                                                        
                                                    case '3':   break;
                                            
                                                    default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                }
                                            } while(opcion != '5');
                                            break;
                                
                                case '3':   cout<< endl<< "\t\tENERGIA"
                                                << endl<< "\t\t\t1) Bateria: "
                                                << endl<< "\t\t\t2) Eliminidar: ";
                                            do{
                                                cin>>opcion;
                                                switch(opcion){
                                                    case '1':   cout<< endl<< "\t\t\tBATERIA";
                                                                almacen.print(6);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 6, cantidad);
                                                                opcion = '5';
                                                                break;
                                            
                                                    case '2':   cout<< endl<< "\t\t\tELIMINADOR";
                                                                almacen.print(7);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 7, cantidad);
                                                                opcion = '5';
                                                                break;
                                            
                                                    case '3':   break;
                                            
                                                    default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                }
                                            } while(opcion != '5');
                                            break;
                                
                                case '4':   cout<< endl<< "\t\tMICROCONTROLADORES"
                                                << endl<< "\t\t\t1) Arduino: "
                                                << endl<< "\t\t\t2) SparkFun: ";
                                            do{
                                                cin>>opcion;
                                                switch(opcion){
                                                    case '1':   cout<< endl<< "\t\t\tARDUINO";
                                                                almacen.print(8);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 8, cantidad);
                                                                opcion = '5';
                                                                break;
                                                        
                                                    case '2':   cout<< endl<< "\t\t\tSPARKFUN";
                                                                almacen.print(9);
                                                                cout<< endl<< "\t\t\tSeleccione producto: ";
                                                                cin>>op;
                                                                cout<< endl<< "\t\t\tCantidad: ";
                                                                cin>>cantidad;
                                                                almacen.comprar(carrito, op, 9, cantidad);
                                                                opcion = '5';
                                                                break;
                                                        
                                                    case '3':   break;
                                            
                                                    default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                }
                                            } while(opcion != '5');
                                            break;
                                
                                case '5':   cout<< endl<< "Introduzca su busqueda: ";
                                            getline(cin, pBuscar);
                                            almacen.buscar(pBuscar,0,0);
                                            cin>>indexLista;
                                            cout<< "Cantidad a agregar: ";
                                            cin>>cantidad;
                                            almacen.buscar(pBuscar,indexLista, cantidad);
                                            break;
                                
                                case '6':   carrito.inventario();
                                            cout<< endl<< "\n\tDesea terminar su compra?"
                                                << endl<< "\t\t1) Pagar ($"<< carrito.precioTotal()<< ")"
                                                << endl<< "\t\t2) Seguir comprando";
                                            do{
                                                cin>>opcion;
                                                switch(opcion){
                                                    case '1':   cout<< endl<< "\t\tComo desea pagar?"
                                                                    << endl<< "\t\t\t1) Tarjeta de credito"
                                                                    << endl<< "\t\t\t2) Debito"
                                                                    << endl<< "\t\t\t3) Efectivo";
                                                                cin>>opcion;
                                                                if(!system("cls")){} else system("clear");
                                                                cout<< "\n\n\n\t\t\tGRACIAS POR SU COMPRA. VUELVA PRONTO";
                                                                getchar();getchar();
                                                                opcion = '2';
                                                                break;
                                                        
                                                    case '2':   break;
                                                        
                                                    default:    break;
                                                }
                                            } while(opcion != '2');
                                            break;
                        
                                case '7':   break;
                                
                                default:    cout<< "ERROR: Opcion incorrecta";
                                            getchar();getchar();
                                            if(!system("cls")){} else system("clear");
                                            break;
                            }
                        } while(opcion != '7');
                        break;
                
            case '2':   cout<< endl<<
                        "\tTiendita de electronica\t"
                        "\tAngel I. Tellez C.\n"
                        "\tProyecto final POO\t"
                        "\tA01022029@itesm.mx\n\n\n";
                        getchar();getchar();
                        if(!system("cls")){} else system("clear");
                        break;
                
            case '3':   break;
            case '@':   do{
                            if(!system("cls")){} else system("clear");
                            cout<< "\t\t\tADMINISTRADOR DE LA TIENDITA"<< endl
                                << endl<< "\t1) Inventario"
                                << endl<< "\t2) Abastecer"
                                << endl<< "\t3) Buscar"
                                << endl<< "\t4) Eliminar"
                                << endl<< "\t5) Estado de cuenta"
                                << endl<< "\t6) Salir"
                                << endl<< "\t";
                
                            cin>> opcion;
                            switch (opcion) {
                                case '1':   cout<< endl<< "\tINVENTARIO";
                                            almacen.inventario();
                                            getchar();getchar();
                                            break;
                                    
                                case '2':   cout<< endl<< "\tABASTECER"
                                                << endl<< "\t\t1) Componentes electronicos: "
                                                << endl<< "\t\t2) Comunicacion por radiofrecuencia: "
                                                << endl<< "\t\t3) Energia: "
                                                << endl<< "\t\t4) Microcontroladores: "
                                                << endl<< "\t\t5) Regresar"
                                                << endl<< "\t\t";
                                    
                                            do{
                                                cin>> opcion;
                                                switch(opcion){
                                                    case '1':   cout<< endl<< "\t\tCOMPONENTES ELECTRONICOS"
                                                                    << endl<< "\t\t\t1) Capacitores: "
                                                                    << endl<< "\t\t\t2) Circuitos integrados: "
                                                                    << endl<< "\t\t\t3) LED's: "
                                                                    << endl<< "\t\t\t4) Resistencias: "
                                                                    << endl<< "\t\t\t5) Regresar"
                                                                    << endl<< "\t\t\t";
                                                                do{
                                                                    cin>>opcion;
                                                                    switch(opcion){
                                                                        case '1':   cout<< endl<< "\t\t\tCAPACITORES ($5.30)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(0, cantidad);                                                                                    dinero -= cantidad*5.3;
                                                                                    opcion = '5';
                                                                                    break;
                                                                            
                                                                        case '2':   cout<< endl<< "\t\t\tCIR. INTEGRADOS ($4.80)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(1, cantidad);
                                                                                    dinero -= cantidad*4.8;
                                                                                    opcion = '5';
                                                                                    break;
                                                                            
                                                                        case '3':   cout<< endl<< "\t\t\tLED'S ($0.99)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(2, cantidad);
                                                                                    dinero -= cantidad*0.99;
                                                                                    opcion = '5';
                                                                                    break;
                                                                        
                                                                        case '4':   cout<< endl<< "\t\t\tRESISTENCIAS ($0.25)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(3, cantidad);
                                                                                    dinero -= cantidad*0.25;
                                                                                    opcion = '5';
                                                                                    break;
                                                                            
                                                                        case '5':   break;
                                                                            
                                                                        default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                                    }
                                                                } while(opcion != '5');
                                                                break;
                                                    
                                                    case '2':   cout<< endl<< "\t\tCOMUNICACION RF"
                                                                    << endl<< "\t\t\t1) Bluetooth: "
                                                                    << endl<< "\t\t\t2) ZigBee: "
                                                                    << endl<< "\t\t\t3) Regresar";
                                                                do{
                                                                    cin>>opcion;
                                                                    switch(opcion){
                                                                        case '1':   cout<< endl<< "\t\t\tBLUETOOTH ($210.00)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(4, cantidad);
                                                                                    dinero -= cantidad*210;
                                                                                    opcion = '5';
                                                                                    break;
                                                                    
                                                                        case '2':   cout<< endl<< "\t\t\tZIGBEE ($84.50)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(5, cantidad);
                                                                                    dinero -= cantidad*84.5;
                                                                                    opcion = '5';
                                                                                    break;
                                                                            
                                                                        case '3':   break;
                                                                    
                                                                        default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                                    }
                                                                } while(opcion != '5');
                                                                break;
                                                    
                                                    case '3':   cout<< endl<< "\t\tENERGIA"
                                                                    << endl<< "\t\t\t1) Bateria: "
                                                                    << endl<< "\t\t\t2) Eliminidar: ";
                                                                do{
                                                                    cin>>opcion;
                                                                    switch(opcion){
                                                                        case '1':   cout<< endl<< "\t\t\tBATERIA ($100.00)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(6, cantidad);
                                                                                    dinero -= cantidad*100;
                                                                                    opcion = '5';
                                                                                    break;
                                                                    
                                                                        case '2':   cout<< endl<< "\t\t\tELIMINADOR ($220.20)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    getchar();
                                                                                    almacen.agregar(7, cantidad);
                                                                                    dinero -= cantidad*220.2;
                                                                                    opcion = '5';
                                                                                    break;
                                                                    
                                                                        case '3':   break;
                                                                            
                                                                        default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                                    }
                                                                } while(opcion != '5');
                                                                break;
                                                
                                                    case '4':   cout<< endl<< "\t\tMICROCONTROLADORES"
                                                                    << endl<< "\t\t\t1) Arduino: "
                                                                    << endl<< "\t\t\t2) SparkFun: ";
                                                                do{
                                                                    cin>>opcion;
                                                                    switch(opcion){
                                                                        case '1':   cout<< endl<< "\t\t\tARDUINO ($299.99)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(8, cantidad);
                                                                                    dinero -= cantidad*299.99;
                                                                                    opcion = '5';
                                                                                    break;
                                                                    
                                                                        case '2':   cout<< endl<< "\t\t\tSPARKFUN ($149.99)"
                                                                                        << endl<< "\t\t\t\tCantidad: ";
                                                                                    cin>>cantidad;
                                                                                    almacen.agregar(9, cantidad);
                                                                                    dinero -= cantidad*149.99;
                                                                                    opcion = '5';
                                                                                    break;
                                                                    
                                                                        case '3':   break;
                                                                    
                                                                        default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                                    }
                                                                } while(opcion != '5');
                                                                break;
                                                    
                                                    case '5':   break;
                                                    
                                                    default:    cout<< "ERROR: Opcion incorrecta"<< endl;
                                                }
                                            } while(opcion != '5');
                                            break;
                                    
                                case '3':   cout<< endl<< "Introduzca su busqueda: ";
                                            getline(cin, pBuscar);
                                            almacen.buscar(pBuscar,0,0);
                                            cin>>indexLista;
                                            cout<< "Cantidad a agregar: ";
                                            cin>>cantidad;
                                            almacen.buscar(pBuscar,indexLista, cantidad);
                                            break;
                                    
                                case '4':   almacen.caducados();
                                            break;
                                    
                                case '5':   cout<< endl<< "\tESTADO DE CUENTA"
                                                << endl<< "\t\tTotal de ventas: "<< almacen.ventas(0)
                                                << endl<< "\t\tVentas por Categoria "
                                                    << endl<< "\t\t\tComponentes electronicos: "<< almacen.ventas(1)
                                                    << endl<< "\t\t\tComunicacion por radiofrecuencia: "<< almacen.ventas(2)
                                                    << endl<< "\t\t\tEnergia: "<< almacen.ventas(3)
                                                    << endl<< "\t\t\tMicrocontroladores: "<< almacen.ventas(4)
                                                << endl<< "\t\tVentas por producto "
                                                    << endl<< "\t\t\tCapacitores: "<< almacen.ventasDeProductos[0]
                                                    << endl<< "\t\t\tCircuitos integrados: "<< almacen.ventasDeProductos[1]
                                                    << endl<< "\t\t\tLED's: "<< almacen.ventasDeProductos[2]
                                                    << endl<< "\t\t\tResistencias: "<< almacen.ventasDeProductos[3]
                                                    << endl<< "\t\t\tBluetooth: "<< almacen.ventasDeProductos[4]
                                                    << endl<< "\t\t\tZigBee: "<< almacen.ventasDeProductos[5]
                                                    << endl<< "\t\t\tEnergia: "<< almacen.ventasDeProductos[6]
                                                    << endl<< "\t\t\tEliminador: "<< almacen.ventasDeProductos[7]
                                                    << endl<< "\t\t\tArduino: "<< almacen.ventasDeProductos[8]
                                                    << endl<< "\t\t\tSparkFun: "<< almacen.ventasDeProductos[9]
                                                    << endl<< "\t\tGanancias obtenidas: $" << dinero-10000;
                                            break;
                                    
                                case '6':   break;
                                    
                                default:    cout<< "ERROR: Opcion incorrecta";
                                            getchar();getchar();
                                            if(!system("cls")){} else system("clear");
                                            break;
                            }
                        } while(opcion != '4');
                        break;
                
            default:    cout<< "ERROR: Opcion incorrecta";
                        getchar();getchar();
                        if(!system("cls")){} else system("clear");
                        break;
        }
    } while(opcion != '3');
    
    return 1;
}