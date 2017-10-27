//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Capacitor.h"

Capacitor::Capacitor(){
    ID = 0;
    codigo = "CECE" + to_string(rand()%100000);
}

void Capacitor::print(){
    Producto::print();
    cout<< endl<< codigo;
}

Capacitor::~Capacitor(){
    
}