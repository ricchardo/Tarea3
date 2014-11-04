#include "Animal.h"

Animal::Animal()
{
    this->edad = 0;
    this->nombre = "";
}

Animal::Animal()
{
    this->edad = edad;
    this->nombre = nombre;

}

void Animal::setNombre(string nombre)
{
    nombre = nombre;
}

string Animal::getNombre()nombre
{
    return nombre;
}

void Animal::setEdad(int edad)
{
    edad = edad;
}

int Animal::getEdad()edad
{
    return edad;
}

void Animal::imprimir()
{

    cout<<"Animal"<<nombre<<' ' << edad;

}

Animal::~Animal()
{
    //dtor
}
