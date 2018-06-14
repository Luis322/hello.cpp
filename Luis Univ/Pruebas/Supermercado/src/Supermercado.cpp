#include "Supermercado.h"
#include "Producto.h"
#include <iostream>
using namespace std;
Supermercado::Supermercado()
{
    cant=0;
    prod=new Producto[cant];
}
int Supermercado::inicio()
{
    cout<<"¿Que desea comprar?"<<endl;
    cout<<"Embutidos:  1"<<endl;
    cout<<"Carne:      2"<<endl;
    cout<<"Fruta:      3"<<endl;
    cout<<"Menestras:  4"<<endl;
    cout<<"Verduras:   5"<<endl;
    cin>>a;

    if(a<=5 and a>=1){
        switch(a){
    case 1:
        Embutidos::mostrar()
        }
    }

}

void Supermercado::addProd(Producto p)
{
    Producto *nprod=new Producto[++cant];
    for(int i=0;i<cant;i++){
        nprod[i]=prod[i];
    }
    prod=nprod;
    delete [] nprod;
}
void Supermercado::removeProd(Producto p)
{
    Producto *nprod=new Producto[cant];
    for(int i=0;i<cant;i++){
        if(prod[i].codigo != p.codigo){
            nprod[i]=prod[i];
        }
    }
    prod=nprod;
    delete [] nprod;
}
Supermercado::~Supermercado()
{
    delete [] prod;
}
