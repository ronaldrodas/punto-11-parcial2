#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <iostream>
#include <string>

using namespace std;


class Trabajador
{
protected:
string nombre;
int edad;
public:
    Trabajador();
    Trabajador(int ed): edad(ed){}
    int getEdad() const;
    void setEdad(int e);
    string getNombre() const;
    void setNombre(const string &value);
    void obtenerDatos();
};



#endif // TRABAJADOR_H
