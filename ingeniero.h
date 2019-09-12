#ifndef INGENIERO_H
#define INGENIERO_H
#include "trabajador.h"

#include <iostream>
#include <string>

using namespace std;
class Ingeniero:public Trabajador
{   float peso;
public:
    Ingeniero( int e=0, float p=0) :Trabajador (e), peso(p) { }
    Ingeniero operator +(Ingeniero c);
    Ingeniero operator -(Ingeniero c);
     void Imprimir();
     float getPeso() const;
     void setPeso(float value);
     void obtenerDatos();

};

#endif // INGENIERO_H
