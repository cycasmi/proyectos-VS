//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Resistencia.h"

Resistencia::Resistencia(){
    ID = 3;
    codigo = "CERE" + to_string(rand()%100000);
}

void Resistencia::print(){
    Producto::print();
    cout<< endl<< codigo;
}

Resistencia::~Resistencia(){
    
}