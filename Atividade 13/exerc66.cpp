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

void geravet(int vet[]){
    for(int i=0; i<20; i++){
        *(vet+i)=rand()%45+5;
        for(int j=0; j<i; j++){
            if(vet[i]==vet[j]){
                i--;
            }
        }
    }
    cout<<endl<<"Vetor gerado ! "<<endl;
}

void mostra(){
    char t[10];

    ifstream esc;
    esc.open("vetor.txt", ios::in);

    while(!esc.fail()){
        esc.getline(t, 10,',');
        cout<<t<<", ";
    }
    cout<<endl;

    esc.close();
}

void escreve(int vet[]){
    ofstream esc;
    esc.open("vetor.txt", ios::out);

    for(int i=0; i<20; i++){
        esc<<*(vet+i)<<',';
    }

    esc.close();
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int menu;
    int vet[20];
    bool gero=0;

    do{
        cout<<"0-Sair";
        cout<<endl<<"1-Gerar vetor";
        cout<<endl<<"2-Escrever valores no arquivo texto";
        cout<<endl<<"3-Ler arquivo";
        cout<<endl<<"Selecione a sua opção: ";
        cin>>menu;

        if(menu>3 || menu<0){
            cout<<endl<<"Informe um valor dentro do intervalo determinado !";
            continue;
        }

        if(menu==0){
            break;
        }
        if(menu==1){
            geravet(vet);
            gero=1;
            continue;

        }

        if(gero==1){
            if(menu==2){
                escreve(vet);
            }
            if(menu==3){
                mostra();
            }
        }
        else{
            cout<<endl<<"O vetor ainda não foi gerado";
        }

    }while(menu!=0);
}