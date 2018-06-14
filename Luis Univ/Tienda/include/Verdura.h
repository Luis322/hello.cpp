#ifndef VERDURA_H
#define VERDURA_H

#include <Producto.h>


class Verdura : public Producto
{
    public:
        Verdura();
        void menuVerd(int);
        virtual ~Verdura();

    protected:

    private:
};

#endif // VERDURA_H
