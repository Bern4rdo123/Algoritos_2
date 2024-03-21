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

void mostra(int cont){
    ifstream ler;
    ler.close();
    ler.open("arquivo.txt", ios::in);

    char t[10];
    ler.getline(t, 10, ';');

    float *vet=new float[cont];
    float *p=vet;

    while(!ler.fail()){
        *p=atof(t);
        ler.getline(t, 10, ';');
        cout<<t[0];
        p++;
    }

    sort(vet, vet+cont);

    cout<<endl;
    for(int i=0; i<cont; i++){
        cout<<vet[i]<<", ";
    }
}

void leitura(){
    char t[10];
    ifstream ler;
    ler.open("arquivo2.txt", ios::in);

    ler.getline(t, 10, ';');
    float soma=0;
    float cont=0;
    float maior=0;
    float menor=atoi(t);

    while(!ler.fail()){
        if(atof(t)>maior){
            maior=atof(t);
        }
        if(atof(t)<menor){
            menor=atof(t);
        }
        cont++;
        soma+=atof(t);
        ler.getline(t, 10, ';');
    }
    ler.close();
    cout<<"Soma: "<<soma<<endl;
    cout<<"Média: "<<(float)soma/cont;
    cout<<endl<<"Maior: "<<maior;
    cout<<endl<<"Menor: "<<menor;
    mostra(cont);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    ofstream escrita;
    escrita.open("arquivo2.txt",ios::app);

    string tex;

    getline(cin, tex);

    escrita<<tex;
    escrita.close();

    leitura();
}