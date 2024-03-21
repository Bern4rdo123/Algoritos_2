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
    ofstream esc;
    esc.open("exer_73.txt", ios::app);

    cout<<"Informe o nome do aluno: ";
    fflush(stdin);
    string nome;
    getline(cin, nome);

    cout<<endl<<"Informe a nota 1: ";
    int n1;
    cin>>n1;

    cout<<endl<<"Informe a nota 2: ";
    int n2;
    cin>>n2;

    cout<<endl<<"Informe a nota 3: ";
    int n3;
    cin>>n3;

    esc<<nome<<","<<n1<<","<<n2<<","<<n3<<","<<"\n";
    esc.close();
}

void mostra(){
    ifstream le;
    le.open("exer_73.txt",ios::in);

    char t[25];
    while(!le.fail()){
        le.getline(t,25,',');
        cout<<"Nome: "<<t;
        cout<<"|";

        int soma=0;
        for(int i=0; i<3; i++){
            le.getline(t,25,',');
            soma+=atoi(t);
        }
        cout<<"Média: "<<soma/3;
        cout<<endl;
    }
    le.close();
}

void mmm()
{
    ifstream le;
    le.open("exer_73.txt",ios::in);

    char t[25];
    int maior=0;
    le.getline(t,25,',');
    int menor=10;
    int cont=0;
    int soma=0;
    int soma2;
    while(!le.fail()){
        for(int i=0; i<3; i++){
            le.getline(t,25,',');
            soma+=atoi(t);
        }
        soma/=3;
        if(soma>maior){
            maior=soma;
        }
        if(soma<menor){
            menor=soma;
        }
        cont++;
        soma2+=soma;
        le.getline(t,25,',');
    }
    cout<<endl;
    cout<<"Maior nota: "<<maior;
    cout<<endl<<"Menor nota: "<<menor;
    cout<<endl<<"Média: "<<(float)soma2/cont;
    cout<<endl;
    le.close();
}

void aprov(){
    ifstream le;
    le.open("exer_73.txt",ios::in);

    char t[25];
    int soma=0;
    while(!le.eof()){
        le.getline(t,25,',');
        cout<<t<<": ";
        for(int i=0; i<3; i++){
            le.getline(t,25,',');
            soma+=atoi(t);
        }
        soma/=3;

        if(soma>6){
            cout<<"Aprovado";
            cout<<endl;
            continue;
        }
        else {
            cout << "Reprovado";
            cout<<endl;
            continue;
        }
    }
    le.close();
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int menu;

    do {
        cout<<"0-sair";
        cout<<endl<<"1-Cadastrar aluno";
        cout<<endl<<"2-Mostrar todos os alunos e suas médias";
        cout<<endl<<"3-Mostrar a maior nota, a menor, e a média";
        cout<<endl<<"4-Calcular percentual de alunos aprovados";
        cout<<endl<<"Selecione a opção: ";
        cin>>menu;

        if(menu==1){
            cadastra();
        }
        if(menu==2){
            mostra();
        }
        if(menu==3){
            mmm();
        }
        if(menu==4){
            aprov();
        }
    }while(menu!=0);
}