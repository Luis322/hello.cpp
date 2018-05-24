#include <iostream>
#include "arrayDinamico.h"
using namespace std;

int main()
{
    arrayDinamico m(10);
    m.llenarDatos();
    //m.insert_arr(1,0);
    //m.imprimir();
    //m.eliminar_arr(3);
    //m.imprimir();
    cout<<m.mayor()<<endl;
    cout<<m.menor()<<endl;


    return 0;
}
