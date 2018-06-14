#ifndef EMBUTIDO_H
#define EMBUTIDO_H
#include "Producto.h"

class Embutido : public Producto
{
    public:
        Embutido();
        int mostrar();
        void addEmbut(Producto);
        virtual ~Embutido();

    protected:

    private:
        int a;
        Producto *embut;
};

#endif // EMBUTIDO_H
