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
#include<fstream>

using namespace std;

void mostra(int vet[],int tamanho){
    for(int i=0; i<tamanho; i++){
        cout<<vet[i]<<",";
    }

    ofstream esc;
    esc.open("exer_71.txt", ios::out);
    for(int i=0; i<tamanho; i++){
        esc<<vet[i]<<",";
    }
cout<<endl;
    sort(vet, vet+tamanho);
    for(int i=0; i<tamanho; i++){
        cout<<vet[i]<<",";
    }
    esc.close();
}

void apagar(int vet[], int tamanho){
    cout<<endl<<"Informe o valor que deseja apagar: ";
    int v;
    cin>>v;

    for(int i=0; i<tamanho; i++){
        if(vet[i]==v){
            for(int j=i; j<tamanho; j++){
                vet[j]=vet[j+i];
            }
            tamanho--;
        }
    }
    mostra(vet,tamanho);
}

void gera(int vet[], int tamanho){
    for(int i=0; i<tamanho; i++){
        vet[i]=rand()%500;
        for(int j=0; j<i; j++){
            if(vet[i]==vet[j]){
                i--;
                break;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho;

    cout<<"Informe um valor de vetor: ";
    cin>>tamanho;

    int vet[tamanho];

    gera(vet, tamanho);
    mostra(vet,tamanho);
    int apaga;
    do{
        cout<<endl<<"Deseja apagar um número? ";
        cin>>apaga;

        if(apaga==1){
            apagar(vet, tamanho);
        }
    }while(apaga==1);
}