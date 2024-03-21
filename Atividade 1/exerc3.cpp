#include<iostream>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
 
using namespace std;
int main()
{
 
   setlocale(LC_ALL,("Portuguese"));
 
    int menu;

    cout<<endl<<" 1- Radiciação";
    cout<<endl<<" 2- Potencialização";
    cout<<endl<<" 3- Arredondar valor";
    cout<<endl<<" 4- Verifica se é primo ou não";
    cout<<endl<<" 5- Verificar se esse número é perfeito";
    cout<<endl;
    cin>>menu;

    switch(menu){
        case 1:
        int n, m;
        cout<<endl<<" INFORME O VALOR DE RAIZ DESEJADO: ";
        cin>>n;
        m=sqrt(n);
        cout<<endl<<" A RAIZ QUADRADA DESSE VALOR É DE: "<<m;
        break;

        case 2:{
        cout<<endl<<" INFORME O VALOR DA BASE: ";
        cin>>n;
        cout<<endl<<" INFORME O VALOR DO EXPOENTE: ";
        cin>>m;

        int i=pow(n,m);

        cout<<n<<"^"<<m<<" = "<<i;
        break;}

        case 3:
        cout<<" INSIRA COMO ENTRAD UM VALOR FLOAT: ";
        float t;
        cin>>t;

        t=round(t);
        cout<<" O NÚMERO ARREDONDADO FOI DE: "<<t;
        break;

        case 4:
        {
        cout<<endl<<" INFORME A SUSPEITA DE PRIMO: ";
        cin>>m;

        int dividiu=0;
        for(int i=m; i>0; i--){
            if(m%i==0){
                dividiu++;
            }
        }
        if(dividiu>2){
            cout<<endl<<" O NUMERO NÃO É PRIMO !";
        }
        else{
            cout<<" O NÚMERO É SIM PRIMO !";
        }
        break;
        }

        case 5:{
            
        cout<<" INFORME UM VALOR: ";
        cin>>n;
        int soma=0;
        for(int i=1; i<n; i++){
            if(n%i==0){
                soma+=i;
            }
        }
        if(soma==n){
            cout<<endl<<"ESSE É UM NÚMERO PERFEITO";
        }
        else{
            cout<<" O NÚMERO INFORMADO NÃO É PERFEITO !";
        }
        break;
        }
    }
}