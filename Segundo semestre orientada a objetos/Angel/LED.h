//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#pragma once

#include "Componentes.h"

class LED : public Componentes {
public:
    LED();
    void print();
    
    ~LED();
};