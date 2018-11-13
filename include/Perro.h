#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"


class Perro:public Animal
{
    public:
        Perro(string);
        void habla();
        void aullar();
};

#endif // PERRO_H
