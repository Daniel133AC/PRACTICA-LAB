#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

Animal::Animal(string n,int p)
{
    nombre = n;
    nroPatas = p;
}

void Animal::hacerHablar()
{
    this->habla();
}
