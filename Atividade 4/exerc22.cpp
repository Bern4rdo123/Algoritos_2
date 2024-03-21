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

    for(int i=0; i<10; i++){
            vet[i]=rand()%100+1;
        for(int j=0; j<i; j++){
            if(vet[i]==vet[j]){
                i--;
                break;
            }
        }
    }

}

void mostra(int vet[]){
    for(int i=0; i<10; i++){
        cout<<vet[i]<<" - ";
    }
}

int maior(int vet[],int cont, int maiorn){
    if(cont==sizeof(vet)){
        return maiorn;
    }
    else{
        if(vet[cont]>maiorn){
            maiorn=vet[cont];
        }
        maior(vet, cont+1, maiorn);
    }
}
main()
{
setlocale(LC_ALL, "Portuguese");


    int vet[10];
    int cont=0;
    int maiorn=0;

    geravet(vet);
    mostra(vet);
    cout<<endl;
    cout<<" maior número presente no vetor: ";
    cout<<maior(vet, cont,maiorn);
}
