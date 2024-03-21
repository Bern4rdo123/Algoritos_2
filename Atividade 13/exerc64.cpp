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

void mostra(int mat[][5]){
    for(int i=0; i<5; i++){
        cout<<mat[i][i]<<"  "<<endl;
    }
}

void dsec(int mat[][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i+j==4){
                cout<<mat[i][j]<<"  "<<endl;
            }
        }
    }
}

void soma(int mat[][5]){
    int somabaixo=0;
    int somacima=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i>j){
                somabaixo+=mat[i][j];
            }
            if(i<j){
                somacima+=mat[i][j];
            }
        }
    }
    cout<<"Soma acima da diagonal principal: "<<somacima;
    cout<<endl<<"Soma abaixo da diagonal principal: "<<somabaixo<<endl;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    ifstream escreve;
    escreve.open("numeros.txt", ios::in);

    char t[10];
    escreve.getline(t, 10, ';');

    int mat[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            mat[i][j]=atoi(t);
            escreve.getline(t, 10, ';');
        }
    }
    escreve.close();

    int menu;
    do{
        cout<<"0- Sair"<<endl;
        cout<<"1- Mostra diagonal principal"<<endl;
        cout<<"2- Mostra elementos diagonal secundária"<<endl;
        cout<<"3- Mostra matriz, soma elementos cima e baixo"<<endl;
        cout<<"Selecione a opção: ";
        cin>>menu;

        if(menu>3 || menu<0){
            cout<<endl<<"Informe o valor dentro do intervalo";
        }

        if(menu==1){
            mostra(mat);
        }

        if(menu==2){
            dsec(mat);
        }
        if(menu==3){
            soma(mat);
        }
    }while(menu!=0);
}