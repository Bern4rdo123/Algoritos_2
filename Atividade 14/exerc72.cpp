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

void escreve(int vet[]){
    ofstream esc;
    esc.open("exer_72.txt", ios::out);

    for(int i=0; i<20; i++){
        esc<<vet[i]<<",";
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[20];

    for(int i=0; i<20; i++){
        vet[i]=rand()%100;
        cout<<vet[i]<<",";
    }
    cout<<endl;

    escreve(vet);

    cout<<"Informe o primeiro número a ser trocado: ";
    int n1;
    cin>>n1;

    cout<<endl<<"Informe o segundo número a ser trocado: ";
    int n2;
    cin>>n2;

    for(int i=0; i<20; i++){
        if(vet[i]==n1){
            for(int j=0; j<20; j++) {
                if (vet[j] == n2) {
                    swap(vet[i], vet[j]);
                }
            }
        }
    }
    escreve(vet);
}