#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato:public Animal
{
    public:
        Gato(string);
        void habla();
        void ronronear();
};

#endif // GATO_H
