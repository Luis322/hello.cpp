#include <iostream>

using namespace std;
int sumEle(int arr[],int len,int i=1){
    for(;i<len;i++){
        arr[0]+=arr[i];
    }
    return arr[0];

}
int sumEleV2(int arr[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i];
    }
    return sum;

 }

int SumRecu(int arr[],int len){
    if (len==1){
        return arr[0];
    }else{
    return arr[len-1]+ SumRecu(arr,--len);
    }
}
int invertir(int arr[],int len){
    int i=0;
    int a=0;
    for(;i<len;i++){
        a=arr[i];
        arr[i]=arr[--len];
        arr[len]=a;
    }
int tamanio(char arr[],int len){
    int i = 0;
    int sum=0;
    for(;i<len;i++){
        sum+=1
    }
    return sum
}
}
int main()
{
    cout << "Hello world!" << endl;
    int p[4]={1,2,3,4};
    char q[4]={'h','o','l','a'};
    //cout<<sumEleV2(p,3);
    //char t[]={'h','e','l','l','o'};
    //cout<<t[];
    //char s[]="hello";
    //cout<<SumRecu(p,3);
    //invertir(p,4);

    //int i=0;
    //for(;i<4;i++){
    //    cout<<p[i]<<", ";
    //}

    cout<<tamanio(q,4);






    return 0;
}
