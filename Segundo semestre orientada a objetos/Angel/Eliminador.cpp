//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "Eliminador.h"

Eliminador::Eliminador(){
    ID = 7;
    codigo = "ENEL" + to_string(rand()%100000);
}

void Eliminador::print(){
    Producto::print();
    cout<< endl<< codigo;
}

Eliminador::~Eliminador(){
    
}