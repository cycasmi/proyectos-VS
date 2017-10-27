//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#pragma once

#include "Producto.h"

class Energia : public Producto{
public:
    Energia();
    virtual void print();
    
    ~Energia();
};