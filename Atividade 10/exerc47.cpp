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

void geravet(int vet1[], int vet2[]){
    for(int i=0; i<10; i++){
        *(vet1+i)=rand()%15+5;
        for(int j=0; j<i; j++){
            if(*(vet1+j)==*(vet1+i)){
                i--;
                continue;
            }
        }
    }

    for(int i=0; i<10; i++){
        *(vet2+i)=rand()%15+5;
        for(int j=0; j<i; j++){
            if(*(vet2+j)==*(vet2+i)){
                i--;
                continue;
            }
        }
    }
}

void verifica(int vet1[], int vet2[],int aux[], int **p){
    for(int i=0;i<10; i++){
        *(aux+i)=0;
    }

    for(int i=0; i<10; i++){
        if(*(vet1+i)==*(vet2+i)){
            *(aux+i)=1;
        }
    }
    cout<<endl<<"Os números são iguais nas posições: ";
    for(int i=0; i<10; i++){
        if(*(aux+i)==1){
            cout<<i<<", ";
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int vet1[10];
    int vet2[10];

    int aux[10];
    int cont1;
    int *p=&cont1;

    geravet(vet1,vet2);

    for(int i=0; i<10; i++){
        cout<<*(vet1+i)<<" - ";
    }
    cout<<endl<<endl;
    for(int i=0; i<10; i++){
        cout<<*(vet2+i)<<" - ";
    }

    verifica(vet1, vet2,aux, &p);
}