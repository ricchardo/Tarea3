#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"


class Perro public Animal
{
    public:
        Perro(string nombre, int edad);
        virtual ~Perro();
        void funcion();
    protected:
    private:
};

#endif // PERRO_H
