#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

int gera(int vet[]){
    int t=0;
    int *i=&t;
    for(*i=0; (*i)<12; (*i)++){
        vet[*i]=rand()%50;
    }
    return 0;
}

int verifica(int vet[], int **pimpar, int **psoma){
    int somapar=0;
    int *g=&somapar;
    for(int i=0; i<12; i++){
        if(*(vet+i)%2==0){
            **psoma=**psoma+*(vet+i);
            (*g)++;
        }
        else{
            (**pimpar)++;
        }
    }
    cout<<endl<<"Total de números pares: "<<*g;
    cout<<endl<<"Percentual de números ímpares: "<<((float)(**pimpar)/(float)sizeof(vet))*100.00<<"% ";
    cout.precision(2);
    cout<<endl<<"Média dos valores: "<<(float)(**psoma)/sizeof(vet);

    return 0;
}

void maior(int vet[], int **pimpar, int **psoma){
    int ma;
    int *mai=vet;

    for(int i=0; i<12; i++){
        if(*(vet+i)>*mai){
            *mai=*(vet+i);
        }
    }
    cout<<endl<<"O maior número do vetor é: "<<*mai;
    cout<<" e está na posição: "<<mai;
    return;
}


int main(){
    setlocale(LC_ALL,("pt-BR"));

    int vet[12];
    int soma=0;
    int impar=0;

    int *psoma=&soma;
    int *pimpar=&impar;

    gera(vet);
    verifica(vet, &pimpar, &psoma);
    maior(vet, &pimpar, &psoma);

}
