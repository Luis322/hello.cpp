#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "Supermercado.h"

class Producto
{
    public:
        Producto();
        int codigo;
        virtual ~Producto();

    protected:



    private:
        char* nombre;
        float precio;

};

#endif // PRODUCTO_H
