//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Arduino.h"

Arduino::Arduino(){
    ID = 8;
    codigo = "MCAR" + to_string(rand()%100000);
}

void Arduino::print(){
    Producto::print();
    cout<< endl<< codigo;
}

Arduino::~Arduino(){
    
}