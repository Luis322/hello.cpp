#include <iostream>

using namespace std;

int main()
{
//PROBLEM 1 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int edad;
    cout << "Ingrese edad"<<endl;
    cin >> edad;
    if (edad>=0 and edad<130){
        if (edad<18){
            cout<<"Menor de edad";
        }else{
        cout<<"Mayor de edad";}
    }else{
    cout<<"Edad invalida";}*/

//PROBLEM 2 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int n,a;
    a=1;
    cout << "Ingrese un numero"<<endl;
    cin >> n ;
    while (a<n){
        cout<<a<<" , ";
        a = a + 1;
    }cout << n;*/

//PROBLEM 3 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int ma,me,b,num;
    float promedio;
    b=1;
    ma=0;
    me=99999999;
    promedio=0;
    while (b <= 3){
        cin>>num;
        if (num>=ma){
            ma = num;
        }
        if (num<me ) {
            me = num;
        }
        promedio = promedio + num;
        b = b + 1;
    }
    promedio = promedio/3;
    cout<<"Mayor: "<<ma<<", menor: "<<me<<", promedio: "<<promedio;*/

    //PROBLEM 4 |||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int a,b;
    cout<<"Ingrese numero 2 numeros"<<endl;
    cin>>a;
    cin>>b;
    if (a%2 == 0 and b%2 == 0){
        cout<<"Son Multiplos de 2"<<endl;
    }else{
    cout<<"Uno de ellos no es multiplo de dos"<<endl;}
    if (a%b==0){
        cout<<"Son multiplos"<<endl;
    }else{
    cout<<"El primero no es multiplo del segundo"<<endl;}
    if (a*a==b){
        cout<<"a*a = b"<<endl;
    }else{
    cout<<"a*a != b"<<endl;}*/

    //PROBLEM 5 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int num;
    cout<<"Ingrese un numero"<<endl;
    cin >> num;

    if(num%2 != 0 and num%3 != 0 and num%5!= 0 or num == 2 or num == 3 or num == 5){
        cout<<"Es un numero primo"<<endl;
    }else{
    cout<<"No es un numero primo"<<endl;}*/

    //PROBLEM 6 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int n,cont;
    cont = 2;
    cout<<"Ingrese un numero"<<endl;
    cin >> n;
    while (cont < n){
        if(cont%2 != 0 and cont%3 != 0 and cont%5!= 0 or cont == 2 or cont == 3 or cont == 5){
            cout<<cont<<endl;
        }
        cont = cont + 1;
    }*/

    //PROBLEM 7, 8 |||||||||||||||||||||||||||||||||||||||||||||||||

    /*int x,a,b,c,d,e;
    cout<<"Ingrese un numero de 5 digitos"<<endl;
    cin >> x;
    a = x/10000;
    b = x/1000;
    b = b%10;
    c = x/100;
    c = c%100;
    c = c%10;
    d = x/10;
    d = d%1000;
    d = d%100;
    d = d%10;
    e = x%10000;
    e = e%1000;
    e = e%100;
    e = e%10;
    cout<<a<<"    "<<b<<"    "<<c<<"    "<<d<<"    "<<e<<endl;
    if (a==e and b == d){
        cout<<"Es un Palindrome";
    }else{
    cout<<"No es un Palindrome";}*/

    //PROBLEM 9 |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int ano;
    cout<<"Ingrese un año"<<endl;
    cin>>ano;
    if (ano%4 == 0){
        cout<<"Es un anio bisiesto";
    }else{
    cout<<"No es un anio bisiesto";}*/

    //PROBLEM 10 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    /*int a,b,n;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    a = 0;
    b = 1;
    while (b<= n){
        cout<<a<<endl;
        a = a + b;
        cout <<b<<endl;
        b = b + a;

    }*/

    //PROBLEM EXTRA |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    int x,c,f;
    f = 1;
    c = 1;
    cout<<"Ingrese un numero"<<endl;
    cin >> x;
    while (c<=x){
        f = f*c;
        c = c+1;
    }
    cout <<f;

    return 0;
}
