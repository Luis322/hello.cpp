#include "Producto.h"

Producto::Producto()
{
    cant=0;
    prod=new Producto[cant];
}
void Producto::addProd(Producto p)
{
    Producto *nprod=new Producto[++cant];
    for(int i=0;i<cant;i++){
        nprod[i]=prod[i];
    }
    prod=nprod;
    delete [] nprod;
}
void Producto::removeProd(Producto p)
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
Producto::~Producto()
{
    delete [] prod;
}
