#include "Tienda.h"
#include <iostream>
#include "Verdura.h"
using namespace std;
Tienda::Tienda()
{

}
void Tienda::menu()
{
    int a;
    while(a!=5)
    {
        cout<<"BIENVENIDO"<<
        cout<<"¿Que desea comprar?"<<endl;
        cout<<"Verduras:  1"<<endl;
        cout<<"Carne:      2"<<endl;
        cout<<"Fruta:      3"<<endl;
        cout<<"Menestras:  4"<<endl;
        cout<<"Embutidos:   5"<<endl;
        cin>>a;
        //switch(a){
    //case 1:
        //Verdura::menuVerd();

        //}
    }


}

Tienda::~Tienda()
{
    //dtor
}
