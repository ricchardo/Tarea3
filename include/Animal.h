#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
using std::string;

class Animal
{
    public:
        int edad;
        string nombre;
        Animal();
        Animal(string nombre, int edad);
        void setEdad(int); //Establece la Edad
        int getEdad()edad;//devuelve la edad
        void setNombre(string nombre);//establece el nombre
        string getNombre()nombre;//devuelve el nombre
        virtual ~Animal();
    protected:
    private:
};

#endif // ANIMAL_H
