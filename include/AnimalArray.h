#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include "AnimalAbs.h"

class AnimalArray
{
    public:
        AnimalArray();
        AnimalArray(const AnimalAbs [],int);
        AnimalArray(AnimalArray &);
        void retam(int);
        void ponfin(const AnimalAbs &);
        void inse(const AnimalAbs &,const int);
        void removele(const int);
        void print();
        ~AnimalArray();
    private:
        int tam;
        AnimalAbs *arr;

};

#endif // ANIMALARRAY_H
