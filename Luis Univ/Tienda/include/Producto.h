#ifndef PRODUCTO_H
#define PRODUCTO_H


#include "Producto.h"
#include "Tienda.h"
class Producto
{
    public:
        Producto();
        void addProd(Producto);
        void menu();
        void removeProd(Producto);
        virtual ~Producto();

    protected:

    private:
        int cant;
        Producto *prod;
        int codigo;
        char* nombre;
        float precio;


};

#endif // PRODUCTO_H
