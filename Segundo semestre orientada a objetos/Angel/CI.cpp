//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "CI.h"

CI::CI(){
    ID = 1;
    codigo = "CECI" + to_string(rand()%100000);
}

void CI::print(){
    Producto::print();
    cout<< endl<< codigo;
}

CI::~CI(){
    
}