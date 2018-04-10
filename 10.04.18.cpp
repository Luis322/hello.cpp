#include <iostream>

using namespace std;
void edad (int x){
    if (x>=0 and x<130){
        if (x<18){
            cout<<"Menor de edad";
        }else{
        cout<<"Mayor de edad";}
    }else{
    cout<<"Nadie vive tanto >:v";}
}

void numero_y_coma(int n){
    int a;
    a=1;
    while (a<n){
        cout<<a<<" , ";
        a = a + 1;
    }cout << n;
}

void mayor_menor(){
    int ma,me,b,num;
    float promedio;
    b=1;
    ma=0;
    me=99999999;
    promedio=0;
    while (b <= 3){
        cout<<"Ingrese numero";
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
    cout<<"Mayor: "<<ma<<", menor: "<<me<<", promedio: "<<promedio;
}

void multCuad(int a, int b){

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
    cout<<"a*a != b"<<endl;
    }
}

void esPrimo(int num){
    int a;
    a=1;
    while(a<=num){
        if (num%a){
            cout<<"No un numero primo"<<endl;
            return 0
        a++;
        }
    cout<<"Es un numero primo"<<endl;}
}

int main()
{
    // 1
    /*int x2;
    cout << "Ingrese edad"<<endl;
    cin >> x2;
    edad(x2);
    cout<<"\n";
    //2
    int n;
    cout << "Ingrese un numero"<<endl;
    cin >> n ;
    numero_y_coma(n);
    cout<<"\n";
    //3
    mayor_menor();
    //4
    int a,b;
    cout<<"Ingrese numero 2 numeros"<<endl;
    cin>>a;
    cin>>b;
    multCuad(a,b);*/
    //5
    int num;
    cout<<"Ingrese un numero"<<endl;
    cin >> num;
    esPrimo(num);


    return 0;
}
