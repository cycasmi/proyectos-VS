//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "ZigBee.h"

ZigBee::ZigBee(){
    ID = 5;
    codigo = "RFZB" + to_string(rand()%100000);
}

void ZigBee::print(){
    Producto::print();
    cout<< endl<< codigo;
}

ZigBee::~ZigBee(){
    
}