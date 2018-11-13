#include "AnimalArray.h"
#include <iostream>
using namespace std;

AnimalArray::AnimalArray()
{
    this->tam=0;
    this->arr=new AnimalAbs[tam];
}

AnimalArray::AnimalArray(const AnimalAbs *arr,int tam){
    this->tam=tam;
    this->arr=new AnimalAbs[tam];
    for(int i=0;i<tam;i++){
        this->arr[i]=arr[i];
    }
}

AnimalArray::AnimalArray(AnimalArray &a)
{
    this->tam=a.tam;
    this->arr=new AnimalAbs[tam];
    for(int i=0;i<tam;i++){
        arr[i]=a.arr[i];
    }
}

void AnimalArray::retam(int newtam){
    AnimalAbs *pts=new AnimalAbs[newtam];
    int minsize=tam;
    for(int i=0;i<minsize;i++){
        pts[i]=arr[i];}
    delete[] arr;
    tam=newtam;
    arr=pts;
}

void AnimalArray::ponfin(const AnimalAbs &newele)
{
    retam(tam+1);
    arr[tam-1]=newele;
}

void AnimalArray::inse(const AnimalAbs &newele,const int pos)
{
    retam(tam+1);
    for(int i=tam-1;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=newele;
}

void AnimalArray::removele(const int pos)
{
    int newtam=tam-1;
    for(int i=pos;i<newtam;i++){
        arr[i]=arr[i+1];
    }
    AnimalAbs *pts=new AnimalAbs[newtam];
    for(int i=0;i<newtam;i++){
        pts[i]=arr[i];
    }
    delete[] arr;
    tam=newtam;
    arr=pts;

}

void AnimalArray::print()
{
    for(int i=0;i<tam;i++){
        cout<<arr[i].getNom()<<","<<arr[i].getPat()<<" ";}
}

AnimalArray::~AnimalArray()
{
    delete[] arr;
}



