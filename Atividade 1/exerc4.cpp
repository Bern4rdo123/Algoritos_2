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
 
    int vet[10];

    for(int i=0;i<10;i++){
        vet[i]=rand()%35+16;
        for(int j=0; j<i;j++){
            if(vet[i]==vet[j]){
                i--;
                break;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout<<vet[i]<<", ";
    }

    sort(begin(vet),end(vet));

    cout<<endl;
    for(int i=0; i<10; i++){
        cout<<vet[i] << "  ";

    }
    cout<<endl;
    for(int i=9; i>=0;i--){
        cout<<vet[i] << "  ";
    }

    int pares=0, impares=0;
    for(int i=0; i<10; i++){
        if(vet[i]%2==0){
            pares++;
        }
        else{
            impares++;
        }
    }
    cout<<endl<<" EXISTEM " << pares << " NUMEROS PARES NO VETOR ";
    cout<<endl<<" existem " << impares<< " numeros ímpares no vetor ";
    cout<<endl<<" a porcentagem de números pares no vetor é de "<< (pares*100/10) << "%";

    int soma=0;
    for(int i=0; i<10; i++){
        soma+=vet[i];
    }

    cout<< " a média dos valores é de: "<< soma/10.0;
}