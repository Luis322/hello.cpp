#include "Embutido.h"
#include <iostream>
#include "Producto.h"
using namespace std;
Embutido::Embutido()
{
    //ctor
}
int Embutido::mostrar()
{
    cout<<"prod 1"<<endl;
    cout<<"prod 2"<<endl;
    cout<<"prod 3"<<endl;
    cout<<"prod 4"<<endl;
    cin>>a;
    //if(a<=5 and a>=1){
        //switch(a){
    //case 1:


        //}
    //}
}
void Embutido::addEmbut(Producto p)
{
    Producto *nembut=new Producto[++cant];
    for(int i=0;i<cant;i++){
        nembut[i]=embut[i];
    }
    embut=nembut;
    delete [] nprod;
}
Embutido::~Embutido()
{
    //dtor
}
