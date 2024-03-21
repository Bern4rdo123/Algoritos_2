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

struct prop{
    int numero;
    float tempoativo;
    float dist;
    int freq;
    float velo;
    float peso;
}jogador[50];

void cadastra(int &cont){
    system("cls");
    cout<<endl<<" Informe o número do jogador: ";
    cin>>jogador[cont].numero;

    cout<<endl<<" Informe o tempo que o jogador correu: ";
    cin>>jogador[cont].tempoativo;

    cout<<endl<<" Informe a distância percorrida em km: ";
    cin>>jogador[cont].dist;

    jogador[cont].velo=jogador[cont].dist/jogador[cont].tempoativo;

    cout<<endl<<" Informe a frequência cardíaca média do jogador: ";
    cin>>jogador[cont].freq;

    cout<<endl<<" Informe o peso do jogador: ";
    cin>>jogador[cont].peso;
    cont++;
}
void mostra(int &cont){
    system("cls");
    for(int i=0; i<cont; i++){
        cout<<endl<<"Número:"<<jogador[i].numero;
        cout<<endl<<"Velocidade média: "<<jogador[i].velo;
        cout<<endl<<"Frequência cardíaca: "<<jogador[i].freq;
        cout<<endl;
        cout.fill('-');
        cout.width(40);
        cout<<"-";
    }
    cout<<endl;
    system("pause");
}

void velomed(int &cont){
    system("cls");
    for(int i=0; i<cont; i++){
        cout<<endl<<"Número: "<<jogador[i].numero;
        cout<<endl<<"Velocidade média: "<<jogador[i].velo<<" km/h";
        cout.width(30);
        cout.fill('-');
        cout<<endl;
        cout<<'-';
    }
}

void distancia(int cont){
    int vet2=cont;
    float vet[vet2];
    for(int i=0; i<cont; i++){
        vet[i]=jogador[i].dist;
    }
    std::sort(vet, vet+cont, greater<>());

    for(int i=0; i<cont; i++){
        cout<<endl<<"Distância "<<i+1<<" mais longa: "<<vet[i]<<" km";
    }
}

void consumo(int &cont){
    float vet[cont];
    for(int i=0; i<cont; i++){
        vet[i]=jogador[i].velo*jogador[i].peso*0.0175;
    }
    sort(vet, vet+cont, greater<>());
    cout<<"Maior consumo de calorias: "<<vet[0];
    cout<<endl<<"Menor consumo de calorias: "<<vet[cont];
    cout<<endl<<endl;
    system("pause");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    int cont=0;
    cout.precision(2);
    cout<<fixed;
    do{
        system("cls");
        cout<<endl<<" MENU ";
        cout<<endl<<"0- Sair";
        cout<<endl<<"1- Cadastrar jogador";
        cout<<endl<<"2- Mostrar jogadores cadastrados";
        cout<<endl<<"3- Velocidade média de cada jogador";
        cout<<endl<<"4- Distância percorrida em ordem decrescente";
        cout<<endl<<"5- Maior e menor consumo de calorias";
        cout<<endl<<"Selecione a opção: ";
        cin>>menu;

        if(menu>5 || menu<0){
            cout<<endl<<" INFORME UM VALOR NO INTERVALO ESPERADO !";
            continue;
        }
        if(menu==1){
            cadastra(cont);
        }
        if(menu==2){
            mostra(cont);
        }
        if(menu==3){
            velomed(cont);
        }
        if(menu==4){
            distancia(cont);
        }
        if(menu==5){
            consumo(cont);
        }
    }while(menu!=0);
}
