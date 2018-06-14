#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H
#include "Producto.h"
using namespace std;
class Supermercado:public Producto
{
    public:
        Supermercado();
        int inicio();
        void addProd();
        void removeProd();
        void mostrarProductos();

        virtual ~Supermercado();
        virtual int mostrar();

    protected:

    private:
        Producto *prod;
        float total;
        int cant;
        int a;
};

#endif // SUPERMERCADO_H
