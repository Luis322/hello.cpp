#ifndef TIENDA_H
#define TIENDA_H
#include "Producto.h"

class Tienda
{
    public:
        Tienda();
        virtual void menu();

        virtual ~Tienda();

    protected:

    private:
        int a;
        char* nombre;
};

#endif // TIENDA_H
