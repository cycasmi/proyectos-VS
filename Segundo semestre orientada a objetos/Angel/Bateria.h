//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#pragma once

#include "Energia.h"

class Bateria : public Energia {
public:
    Bateria();
    void print();
    
    ~Bateria();
};