#include <iostream>

using namespace std;
bool esPerfecto(int n,int i=1,int c=0){
    for(;i<n;i++){
        if(!(n%i)){
            c+=i;
        }
    }
    if(c==n){
        return true;
    }else{return false;}
}
int sonPerfectos(int n, int i=5,int j=1){
    for (;i<=n;i++)
    if (esPerfecto(i)){
        cout <<i<<": ";
        for(;j<i;j++){
            if(!(n%j)){
                cout<<j<<" - ";
            }
        }
        cout<<endl;
    }
}
bool esPrimo(int n, int i=2){
    if (n==2){
        return true;
    }
    for(;i<n;i++){
         if(!(n%i)){
             return false;
            }
    }return true;
}
int Primos(int n, int i=2){
    for(;i<=n;i++){
        if (esPrimo(i)){
            cout<<i<<", ";
        }
    }
}
long int potencia(int b, int e){
    if(e==0){
        return 1;
    }
    if(e==1){
        return b;
    }
    else{
        return b*potencia(b,e-1);
    }
}
void intercambio(int a,int b){
    a+=b;
    b=a-b;
    a-=b;
    cout<<a<<" ;"<<b;
}
int intercambioBit(int &a,int &b){
    a^=b;
    b^=a;
    a^=b;
    cout <<a<<", "<<b;

int main()
{
    cout << "Hello world!" << endl;
    //cout <<esPerfecto(8);
    //sonPerfectos(10000);
    //cout<<esPrimo(169);
    //Primos(100);
    //cout<<potencia(2,10);
    //intercambio(1,2);
    int a=0;
    int b=1;
    intercambioBit(a,b);

    return 0;
}
