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

void cadastra(){
    fflush(stdin);
    cout<<endl<<"Informe o nome: ";
    string nome;
    getline(cin, nome);

    cout<<endl<<"Informe o telefone: ";
    string tele;
    getline(cin, tele);

    ofstream esc;
    esc.open("exer_68.txt", ios::app);

    esc<<nome<<";"<<tele<<endl;
    esc.close();
}

void mostra(){

    ifstream le;
    le.open("exer_68.txt", ios::in);

    char t[20];

    while(!le.fail()){
        cout<<"Nome: ";
        le.getline(t, 25,';');
        cout<<t;
        cout<<" | Telefone: ";
        le.getline(t,25, '\n');
        cout<<t;
        cout<<endl;
    }
}

void deleta(){
    cout<<"Informe nome a ser deletado: ";
    string nome;
    getline(cin, nome);

}

void consulta(){
    fflush(stdin);

    cout<<"Informe o nome a ser consultado: ";
    string nome;
    getline(cin, nome);

    ifstream le;
    le.open("exer_68.txt", ios::in);

    char t[25];

    while(!le.fail()){
        le.getline(t,25,';');
        if(t==nome){
            cout<<"Esse nome já existe e tem telefone de: ";
            le.getline(t,25,'\n');
            cout<<t;
            cout<<endl;
        }
    }

    le.close();
    /*&le.getline(t,25,';');
    cout<<t;
    cout<<endl;
    le.getline(t,25,';');
    cout<<endl<<t;
    cout<<endl;
     */
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    ofstream esc;
    esc.open("exer_68.txt", ios::app);
    esc.close();

    int menu;

    do{
    cout<<"0-sair";
    cout<<endl<<"1-Cadastrar dados";
    cout<<endl<<"2-Mostrar dados";
    cout<<endl<<"3-Consulta";
    cout<<endl<<"4-Excluir";
    cout<<endl<<"Informe a opção: ";
    cin>>menu;

    if(menu==1){
        cadastra();
    }
    if(menu==2){
        mostra();
    }
    if(menu==3){
        consulta();
    }
    if(menu==4){
        deleta();
    }
    }while(menu!=0);
}