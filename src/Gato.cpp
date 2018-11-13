#include "Gato.h"

Gato::Gato(string gn)
{
    nombre=gn;
    nroPatas=4;
}

void Gato::habla()
{
    cout<<"miau"<<endl;
}

void Gato::ronronear()
{
    cout<<"rrrr"<<endl;
}
