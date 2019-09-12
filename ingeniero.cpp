#include "ingeniero.h"


float Ingeniero::getPeso() const
{
    return peso;
}

void Ingeniero::setPeso(float value)
{
    peso = value;
}

void Ingeniero::obtenerDatos()
{
    cout<<"Ingrese el nombre: ";
    cin>>nombre;
    cout<<"Ingrese la edad: ";
    cin>>edad;
    cout<<"Ingrese el peso: ";
    cin>>peso;
    cout<<endl;
    cout<<"nombre: "<<nombre<<" edad: "<<edad<<" peso: "<<peso<<endl;
}

Ingeniero Ingeniero::operator +(Ingeniero c)
{
    Ingeniero t;
    t.edad=edad+c.edad;
    t.peso=peso+c.peso;
    return t;
}

Ingeniero Ingeniero::operator -(Ingeniero c)
{
    Ingeniero t;
    t.edad=edad-c.edad;
    t.peso=peso-c.peso;
    return t;
}

void Ingeniero::Imprimir() {
   cout <<"edad objeto1 y edad objeto2: "<<edad<<" , "<<"peso objeto1 y peso objeto2: "<<peso<< endl;
}
