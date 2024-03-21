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

void geravet(int vet[]){
    for(int i=0; i<6; i++){
        vet[i]=rand()%50 +1;
        for(int j=0;j<i;j++){
            if(vet[i]==vet[j]){
                i--;
                break;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[6];
    int seq[6];

    for(int i=0; i<6; i++){
        seq[i]=i+1;
    }

    geravet(vet);
    int cont=0;
    int soma=0;
    int *p=&soma;

    int soma2=0;
    int *s=&soma2;

    cout<<"Os números pares são: "<<endl;

    for(int i=0; i<6; i++){
        if(vet[i]%2==0){
            cout<<"Numero "<<vet[i]<<" na posição "<<seq[i];
            cout<<endl;
            *p+=vet[i];
        }
    }
    cout<<"Soma dos números pares: "<<*p;

    cout<<endl<<endl<<"Os números impares são: "<<endl;

    for(int i=0; i<6; i++){
        if(vet[i]%2!=0){
            cout<<"Numero "<<vet[i]<<" na posição "<<seq[i];
            cout<<endl;
            *s+=vet[i];
        }
    }
    cout<<"Soma dos números impares: "<<*s;
}