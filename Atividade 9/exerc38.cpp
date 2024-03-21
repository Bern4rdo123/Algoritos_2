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

using namespace std;

struct vaga{
    bool ocu;
};

void compra(vaga j[], vaga c[]){
    system("CLS");
    cout<<" Digite 1 para cadeiras no corredor e 2 para na janela: ";
    int g;
    cin>>g;
    int *p=&g;
    if(*p==1){
        cout<<endl<<" Selecione a cadeira: ";
        int f;
        cin>>f;
        int *t=&f;
        c[*t-1].ocu=1;
    }
    else{
        cout<<endl<<" Selecione a cadeira: ";
        int f;
        cin>>f;
        int *t=&f;
        j[*t-1].ocu=1;
    }
}

void lista(vaga j[], vaga c[]){
    system("cls");
    cout<<"Janela";
    cout.width(15);
    cout.fill(' ');
    cout<<"Corredor";
    for(int i=0; i<20; i++){
        cout<<endl;
        cout<<i+1<<"-";
        if(j[i].ocu==1){
            cout<<" Ocupada";
        }
        else{
            cout<<" Livre";
        }

        cout.width(10);
        cout.fill(' ');
        cout<<i+1<<"-";
        if(c[i].ocu==1){
            cout<<" Ocupada";
        }
        else{
            cout<<" Livre";
        }
    }
    cout<<endl<<endl<<system("pause");
    return;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    vaga j[20];
    vaga c[20];
    int menu;

    for(int i=0; i<20;i++){
        j[i].ocu=0;
        c[i].ocu=0;
    }

    do{
        system("cls");
        cout<<endl<<"0-SAIR";
        cout<<endl<<"1-Comprar passagem";
        cout<<endl<<"2-Visualizar bancos";
        cout<<endl;
        cout<<"Informe a opção desejada: ";
        cin>>menu;

        if(menu>2 | menu<0){
            cout<<" Tente inserir um valor dentro do intervalo permitido ";
            cout<<endl<<endl<<system("pause");
        }
        if(menu==1){
            compra(j, c);
        }
        if(menu==2){
            lista(j,c);
        }
    }while(menu!=0);
}