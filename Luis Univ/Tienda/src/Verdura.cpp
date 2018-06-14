#include "Verdura.h"
#include <iostream>
using namespace std;
Verdura::Verdura(int _codigo)
{
    codigo = _codigo;
}
void Verdura::menuVerd()
{
    int a;
    cout<<"1) Tomate"<<endl;
    cout<<"2) Zanahoria"<<endl;
    cout<<"3) Brocoli"<<endl;
    cout<<"4) Col"<<endl;
    cout<<"5) Esparragos"<<endl;
    switch(a){
    case 1:
        Producto::addProd(a)


        }


}
Verdura::~Verdura()
{
    //dtor
}
