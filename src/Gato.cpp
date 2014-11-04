#include "Gato.h"

Gato::Gato(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
}

Gato::~Gato()
{
    //dtor
}

void Gato::funcion()
{
    cout<<"Miaoouu!"<<endl;
}
