#include "arrayDinamico.h"
#include <iostream>
using namespace std;
arrayDinamico::arrayDinamico()
{
   len=0;
   int *p=new int[len];
}
arrayDinamico::arrayDinamico(int len)
{
    this->len=len;
    data=new int [len];
}
void arrayDinamico::llenarDatos()
{
    for(int i=0; i<len; i++)
    {
        int a=0;
        cin>>a;
        data[i]=a;
    }
}
void arrayDinamico::insert_arr(int n, int pos)
{
    len+=1;
    int *pnew=new int [len];
    bool j=false;
    for(int i=0; i<len; i++)
    {
        if(i==pos)
        {
            j=true;
            pnew[i]=n;
            continue;
        }
        if(j)
        {
            pnew[i]=data[i-1];
        }
        else{
            pnew[i]=data[i];
        }
    }
    delete[] data;
    data=pnew;
}
void arrayDinamico::eliminar_arr(int pos)
{
    len-=1;
    int *pnew=new int[len];
    bool j=false;
    for(int i=0; i<len; i++)
    {
        if(i==pos)
        {
            j=true;
        }
        if(j)
        {
            pnew[i]=data[i+1];
        }
        else{
            pnew[i]=data[i];
        }
    }
    delete[] data;
    data=pnew;
}
int arrayDinamico::mayor(){
    int mayor=data[0];
    for(int i=1; i<len; i++)
    {
        if(mayor<data[i])
        {
            mayor=data[i];
        }
    }
    return mayor;
}
int arrayDinamico::menor()
{
    int menor=data[0];
    for(int i=1; i<len; i++)
    {
        if(menor>data[i])
        {
            menor=data[i];
        }
    }
    return menor;
}
float arrayDinamico::promedio()
{
    float m=0;
    for(int i=0; i<len; i++)
    {
        m+=data[i];
    }
    m=m/len;
    return m;
}
void arrayDinamico::imprimir()
{
    for (int i=0; i<len; i++)
    {
        cout<<data[i]<<endl;
    }
}
arrayDinamico::~arrayDinamico()
{
    delete [] data;
}
