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

int inverte(int num, int cont, int vet[]){

    if(num<1){
        for(int i=0; i<cont; i++){
            cout<<vet[i];
        };
    }
    else{
        vet[cont]=num%10;
        cont++;
        num=floor(num/10);
        inverte(num, cont, vet);
    }

}

main()
{
setlocale(LC_ALL, "Portuguese");

    cout<<" INFORME UM NÚMERO PARA SER INVERTIDO: ";
    int num;
    cin>>num;
    int cont=0;
    int vet[10];
    inverte(num, cont, vet);

}
