//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#include "SparkFun.h"

SparkFun::SparkFun(){
    ID = 9;
    codigo = "MCSF" + to_string(rand()%100000);
}

void SparkFun::print(){
    Producto::print();
    cout<< endl<< codigo;
}

SparkFun::~SparkFun(){
    
}