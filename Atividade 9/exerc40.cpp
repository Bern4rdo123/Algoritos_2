#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

void desenha(int *p){
    int t=*p;
    int *j=&t;
    for(int i=0; i<*p; i++){
        for(int v=1; v<*j; v++){
            cout<<"  ";
        }
        for(int h=1; h<=i+1;h++){
            cout<<h<<" ";
        }
        *j=*j-1;
        cout<<endl;

    }
    system("pause");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    do{
        cout<<system("cls");
        cout<<"Informe o valor: ";
        cin>>n;
        int *p=&n;

        if(n>9 || n<3){
            cout<<endl<<endl<<"INFORME UM VALOR VÁLIDO !";
            cout<<endl<<endl<<system("pause");
            continue;
        }
        desenha(p);
    }while(n>9 || n<3);
}