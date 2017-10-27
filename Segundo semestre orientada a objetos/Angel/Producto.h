//  Instituto Tecnológico y de Estudios Superiores de Monterrey
//  Campus Santa Fe
//
//  Ángel Iván Téllez Cebada
//  A01022029
//
//  Proyecto POO: Mi Tiendita en línea

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Producto{
protected:
    time_t tiempo;
    
public:
    string nombre;
    string descripcion;
    float precio;
    unsigned short ID;
    string codigo;
    
    Producto();
    Producto(string,string,float);
    Producto(const Producto& original);
    
    bool caducidad();
    void setCaducidad();
    virtual void print();
    
    virtual ~Producto();
};