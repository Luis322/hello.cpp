#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int a,b,c,d,e;

    cout << "Hello world!" << endl;
    /*cin >> x;
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
//escribir un programa que me pida n enteros, despues que solicite 5 numeros y que imprima el promedio, el mayor, el menor
    cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
    cout <<"next"<<endl;


    int n,ma,me,z;
    float pro;
    n = 0;
    ma = 0;
    me = 0;
    pro = 0;
    cin>>z;
    while (n<z){
        cin >>a;
        if (a>=ma){
            ma = a;
        }
        if (a<=me || a == 1){
            me = a;
        }

        pro = pro+a;
        n=n+1;
    };
    pro = pro/n;
    cout<<ma<<" "<<me<<" "<<pro;
    */
    //PALINDROMO
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

    if (a == e and b==d){
        cout<<"Palindromo"<<endl;
    }else{
    cout<<"No es Palindromo"<<endl;}
    return 0;
}
