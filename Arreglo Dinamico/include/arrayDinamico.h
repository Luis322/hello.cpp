#ifndef ARRAYDINAMICO_H
#define ARRAYDINAMICO_H


class arrayDinamico
{
    public:
        arrayDinamico();
        arrayDinamico(int);
        int *data;
        void llenarDatos();
        void insert_arr(int , int);
        void eliminar_arr(int pos);
        int mayor();
        int menor();
        bool esPrimo(int n);
        int mayorPrimo();
        int menorPrimo();
        void invertir();
        void ordenar();
        float promedio();
        void imprimir();
        ~arrayDinamico();

    private:
        int len;
};

#endif // ARRAYDINAMICO_H
