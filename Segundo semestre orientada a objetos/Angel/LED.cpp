//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "LED.h"

LED::LED(){
    ID = 2;
    codigo = "CELD" + to_string(rand()%100000);
}

void LED::print(){
    Producto::print();
    cout<< endl<< codigo;
}

LED::~LED(){
    
}