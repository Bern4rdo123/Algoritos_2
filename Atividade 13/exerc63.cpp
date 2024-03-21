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

void mostra(){
    ifstream le;
    le.open("cadastro.txt", ios::in);

    char t;
    while(le.get(t)){
        cout<<t;
    }
    le.close();
}

void cadastro(){
    ofstream escreve;
    escreve.open("cadastro.txt", ios::app);

    fflush(stdin);

    string t;
    getline(cin, t);
    escreve<<t<<"\n";

    escreve.close();
}

void consultar(){
    ifstream le;
    le.open("cadastro.txt", ios::in);

    char nome[25];
    cout<<"Informe o nome a ser pesquisado: ";
    cin>>nome;

    char t[25];
    le.getline(t, 25);

    if(!strcmp(t, nome)){
        cout<<"O nome já está cadastrado"<<endl<<endl;
    }

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int menu;

    do {
        cout << "0- Sair";
        cout << endl << "1- Cadastrar";
        cout << endl << "2- Mostrar";
        cout << endl << "3- Consultar";
        cout << endl<<"Informe a opção: ";
        cin >> menu;

        if(menu>3 || menu<0){
            cout<<endl<<"Informe um valor válido";
        }

        if(menu==1){
            cadastro();
        }

        if(menu==2){
            mostra();
        }
        if(menu==3){
            consultar();
        }
    }while(menu!=0);
}