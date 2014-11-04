#include "Perro.h"

Perro::Perro(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

Perro::~Perro()
{
    //dtor
}

void Perro::funcion()
{
    cout<<"Waoouu!"<<endl;
}
