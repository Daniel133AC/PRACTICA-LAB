#include "Loro.h"

Loro::Loro(string ln)
{
    nombre=ln;
    nroPatas=2;
}

void Loro::habla()
{
    cout<<"(canta)"<<endl;
}

void Loro::repetir(string h)
{
    cout<<h<<endl;
}
