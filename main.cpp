#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Loro.h"
#include "AnimalAbs.h"
#include "AnimalArray.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    //PARTE 1
    Perro aa("King");
    Gato ab("Sigi");
    Loro ac("Laren");
    string prueba1=aa.getnombre();
    cout<<prueba1<<endl;
    int prueba2=ac.getpatas();
    cout<<prueba2<<endl;
    aa.aullar();
    aa.hacerHablar();
    ab.ronronear();
    ab.hacerHablar();
    ac.repetir("hola hola loro");
    ac.hacerHablar();
    //PARTE 2
    AnimalAbs a("Gitana",4);
    AnimalAbs b("Lindesa",4);
    AnimalAbs c("King",4);
    AnimalAbs d("Pancho",2);
    AnimalAbs e("Pikachu",2);
    AnimalAbs arr[]={a,b,c,d};
    int tam=sizeof(arr)/sizeof(arr[0]);
    AnimalArray lista(arr,tam);
    AnimalArray lista2=lista;
    lista.print();
    cout<<endl;
    lista2.print();
    cout<<endl;
    lista.inse(e,1);
    lista2.ponfin(e);
    lista.print();
    cout<<endl;
    lista2.print();
    cout<<endl;
    lista2.removele(3);
    lista2.print();
    cout<<endl;
   return 0;}


