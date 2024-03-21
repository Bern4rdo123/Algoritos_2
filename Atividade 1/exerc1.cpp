#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>

using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int saque;
    do{
        cout<<" INFORME O VALOR DO SAQUE: ";
        cin>>saque;
        cout<<endl;
    }while(saque<2);
    int nota2=0;
    int nota200=0;
    int nota100=0,nota50=0, nota20=0, nota10=0, nota5=0;

    while(saque % 5!=0){
        saque=saque-2;
        nota2++;
    }
    while(saque>=200){
        nota200++;
        saque-=200;
    }
    while(saque>=100){
        nota100++;
        saque-=100;
    }
    while(saque>=50){
        nota50++;
        saque-=50;
    }
    while(saque>=20){
        nota20++;
        saque-=20;
    }
    while(saque>=10){
        nota10++;
        saque-=10;
    }
    while(saque>=5){
        nota5++;
        saque-=5;
    }

    cout<<endl<<"SAQUE: "<<endl;

    if(nota200>0){
        cout<<nota200<<" de R$200"<<endl;
    }
    if(nota100>0){
        cout<<nota100<<" de R$100"<<endl;
    }
    if(nota50>0){
        cout<<nota50<<" de R$50"<<endl;
    }
    if(nota20>0){
        cout<<nota20<<" de R$20"<<endl;
    }
    if(nota10>0){
        cout<<nota10<<" de R$10"<<endl;
    }
    if(nota5>0){
        cout<<nota5<<" de R$5"<<endl;
    }
        cout<<nota2<<" de r$2"<<endl;

}