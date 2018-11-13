#ifndef LORO_H
#define LORO_H
#include "Animal.h"

class Loro:public Animal
{
    public:
        Loro(string);
        void habla();
        void repetir(string);
};

#endif // LORO_H
