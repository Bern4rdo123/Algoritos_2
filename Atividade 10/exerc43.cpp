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
    for(int i=0; i<20; i++){
        *(vet+i)=rand()%101;
    }
    cout<<"Vetor antes: "<<endl;
    for(int i=0; i<20; i++){
        cout<<*(vet+i)<<" - ";
    }
    cout<<endl<<endl;
}

void vira(int vet[], int **p){
    int salva=vet[0];
    cout<<endl<<salva;
    cout<<**p;
    for(int i=0; i<20-1; i++){
        *(vet+i)=**p;
        *p=*p+1;
    }
    vet[19]=salva;

    cout<<"Vetor depois das trocas: "<<endl;
    for(int i=0; i<20; i++){
        cout<<*(vet+i)<<" - ";
    }
    return;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[20];
    int *p=&vet[1];

    geravet(vet);
    vira(vet, &p);
}