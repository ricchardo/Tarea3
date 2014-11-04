#ifndef GATO_H
#define GATO_H

#include "Animal.h"

class Gato public Animal
{
    public:
        Gato(string nombre, int edad);
        virtual ~Gato();
        void function();
    protected:
    private:
};

#endif // GATO_H
