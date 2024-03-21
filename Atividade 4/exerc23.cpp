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
void decompoe(int num){

}

main()
{
setlocale(LC_ALL, "Portuguese");
int num;
do{
    cout<<" INFORME UM VALOR NO INTERVALO DE 2 E 20: ";

    cin>>num;

    if(num>20 || num<2){
        cout<<endl<<" INFORME UM VALOR NO INTERVALO CITADO !"<<endl;
    }
    else{
        decompoe(num);
    }
    }while(num>20 || num<2);

}
