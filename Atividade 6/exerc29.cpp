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
#include<locale.h>

using namespace std;

struct curso{
    string matricula;
    string nome;
    string curso;
    string turma;
    float media;
    float frequencia;
}aluno[50];

int cadastra(curso aluno[], int &cont) {
    system("cls");
    fflush(stdin);
    cout << " INFORME O NOME DO ALUNO: ";
    getline(cin, aluno[cont].nome);
    fflush(stdin);

    cout << endl << " INFORME A MATRÍCULA DO ALUNO: ";
    getline(cin, aluno[cont].matricula);
    fflush(stdin);

    for (int i = 0; i < cont; i++) {
            if (aluno[cont].matricula == aluno[i].matricula) {
                cout << endl << "A MATRÍCULA DITA JÁ ESTÁ CADASTRADA !";
                return 0;
            }
    }

    cout<<endl<<" INFORME O CURSO DO ALUNO: ";
    getline(cin, aluno[cont].curso);
    fflush(stdin);

    cout<<endl<<" INFORME A TURMA QUE SE ENCONTRA ESSE ALUNO: ";
    getline(cin, aluno[cont].turma);
    fflush(stdin);

    cout<<endl<<" INFORME A MÉDIA DE NOTAS DESSE ALUNO: ";
    cin>>aluno[cont].media;
    fflush(stdin);

    cout<<endl<<" INFORME A FREQUÊNCIA MÉDIA DESSE ALUNO: ";
    cin>> aluno[cont].frequencia;
    fflush(stdin);
    cont++;
    return 0;
}

void listaturma(curso aluno[], int &cont){
    system("cls");
    fflush(stdin);
    cout<<" INFORME O NÚMERO DA TURMA: ";
    string turma;
    getline(cin, turma);

    for(int i=0; i<cont; i++){
        if(aluno[i].turma==turma){
            cout<<endl<<"Nome: "<<aluno[i].nome;
            cout<<endl<<"Matrícula: "<<aluno[i].matricula;
            cout<<endl<<"Média: "<<aluno[i].media;
            cout<<endl<<"Participação: "<<aluno[i].frequencia;
            cout.width(35);
            cout.fill('-');
            cout<<endl<<"-";
            cout<<endl;
        }
    }

}

void aprovacurso(curso aluno[], int &cont){
    system("cls");
    cout<<" INFORME O CURSO A SER COLSULTADO: ";
    string cu;
    fflush(stdin);
    getline(cin, cu);

    for(int i=0; i<cont; i++){
        if(aluno[i].curso==cu){
            if(6.0 < aluno[i].media && aluno[i].frequencia >= 75){
                cout<<"Nome: "<<aluno[i].nome;
                cout<<endl<<" Matrícula: "<<aluno[i].matricula;
                cout<<endl<<endl;
            }
        }
    }
    system("pause");
}

void mediaturma(curso aluno[], int &cont){
    system("cls");
    cout<<" INFORME A TURMA: ";
    string tu;
    getline(cin, tu);

    float maior=aluno[0].media;
    float menor=aluno[0].media;
    int cont2=0;

    float media=0;

    for(int i=0; i<cont; i++){
        if(aluno[i].turma==tu){
            if(aluno[i].media>maior){
                maior=aluno[i].media;
            }
            if(aluno[i].media<menor){
                menor=aluno[i].media;
            }
            media+=aluno[i].media;
            cont2++;
        }
    }
    media=media/cont2;

    cout<<endl<<" A média mais alta da turma é: "<<maior;
    cout<<endl<<" A média mais baixa da turma é: "<<menor;
    cout<<endl<< " A média total da turma é: "<<media;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    int cont=0;
do {
    system("cls");
    cout<< "MENU \n 0- SAIR \n 1- CADASTRAR ALUNO \n 2-LISTAR ALUNO POR TURMA \n 3-LISTAR APROVADOS POR CURSO \n 4- MEDIA POR TURMA\n";
    cout << " Informe a opção desejada: ";
    cin >> menu;

    if(menu>4 || menu<0) {
        cout << endl;
        cout << " informe um valor dentro do intervalo permitido" << endl;
        system("pause");
        continue;
    }
    if(!menu){
        cout<<" você escolheu sair: "<<endl;
        return 0;
    }
    if(menu==1){
        cadastra(aluno, cont);
    }
    if(menu==2){
        listaturma(aluno,cont);
    }
    if(menu==3){
        aprovacurso(aluno, cont);
    }
    if(menu==4){
        mediaturma(aluno, cont);
    }
}while(menu!=0);
}