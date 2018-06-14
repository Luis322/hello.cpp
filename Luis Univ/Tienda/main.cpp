#include <iostream>
#include "Tienda.h"
#include <Producto.h>
using namespace std;

int main()
{
    Verdura Tomate(1);
    Verdura Zanahoria(2);
    Verdura Brocoli(3);
    Verdura Col(4);
    Verdura Esparragos(5);
    Tienda T;
    T.menu();
    return 0;
}
