//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Bluetooth.h"

Bluetooth::Bluetooth(){
    ID = 4;
    codigo = "RFBT" + to_string(rand()%100000);
}

void Bluetooth::print(){
    Producto::print();
    cout<< endl<< codigo;
}

Bluetooth::~Bluetooth(){
    
}