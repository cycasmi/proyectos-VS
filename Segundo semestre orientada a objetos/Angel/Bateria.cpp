//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Bateria.h"

Bateria::Bateria(){
    ID = 6;
    codigo = "ENBD" + to_string(rand()%100000);
}

void Bateria::print(){
    Producto::print();
    cout<< endl<< codigo;
}

Bateria::~Bateria(){
    
}