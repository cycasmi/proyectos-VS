//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#pragma once

#include "ComunicacionRF.h"

class Bluetooth : public ComunicacionRF {
public:
    Bluetooth();
    void print();
    
    ~Bluetooth();
};