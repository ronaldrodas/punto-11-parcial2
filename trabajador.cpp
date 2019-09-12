#include "trabajador.h"

int Trabajador::getEdad() const
{
    return edad;
}

void Trabajador::setEdad(int e)
{
    edad = e;
}

string Trabajador::getNombre() const
{
    return nombre;
}

void Trabajador::setNombre(const string &value)
{
    nombre = value;

}

void Trabajador::obtenerDatos()
{
    cout<<"usando clase trabajador"<<endl;
}



