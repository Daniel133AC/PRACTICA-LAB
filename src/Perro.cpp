#include "Perro.h"

Perro::Perro(string pn)
{
    nombre=pn;
    nroPatas=4;
}

void Perro::habla()
{
    cout<<"guau"<<endl;
}

void Perro::aullar()
{
   cout<<"auuuuu"<<endl;
}
