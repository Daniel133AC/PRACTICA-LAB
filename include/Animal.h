#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

using namespace std;

class Animal
{
    protected:
        string nombre;
        int nroPatas;
    public:
        Animal(string n="",int p=0);
        virtual void hacerHablar();
        virtual void habla()=0;
        virtual int getpatas(){
            return nroPatas;}
        virtual string getnombre(){
            return nombre;}
};

#endif // ANIMAL_H
