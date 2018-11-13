#ifndef ANIMALABS_H
#define ANIMALABS_H
#include <iostream>
#include "strings.h"
using namespace std;

class AnimalAbs
{
    protected:
        string nombre;
        int nroPatas;
    public:
        AnimalAbs();
        AnimalAbs(string , int );
        void habla(void);
        void hacerHablar(void);
        string getNom();
        int getPat();
};

#endif // ANIMALABS_H
