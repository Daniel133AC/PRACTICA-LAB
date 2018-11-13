#include "AnimalAbs.h"
#include <iostream>
using namespace std;

AnimalAbs::AnimalAbs()
{
    nombre="";
    nroPatas=0;
}

AnimalAbs::AnimalAbs(string n, int p)
{
    nombre=n;
    nroPatas=p;
}

string AnimalAbs::getNom(){
    return nombre;}

int AnimalAbs::getPat(){
    return nroPatas;
}

void AnimalAbs::habla()
{
    cout<<"(inserte sonido)";
}

void AnimalAbs::hacerHablar()
{
    this->habla();
}


