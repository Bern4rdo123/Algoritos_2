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

void geravet(int *vet){
    for(int *i=new int(0); *i<20; *i+=1){
        *(vet+*i)=rand()%50;
        for(int *j=new int(0); *j<*i; *j+=1){
            if(*(vet+*i)==*(vet+*j)){
                *i-=1;
            }
        }
    }
}

void maio(int *vet){
    int *maior=new int(0);
    int *menor=new int(*vet);

    for(int *i=new int(0); *i<20; *i+=1){
        if(*(vet+*i)>*maior){
            *maior=*(vet+*i);
        }
        if(*(vet+*i)<*menor){
            *menor=*(vet+*i);
        }
    }

    cout<<"Maior: "<<*maior;
    cout<<endl<<"Menor: "<<*menor;

    system("pause");
}

void mostra(int *vet){

    for(int *i=new int(0); *i<20; *i+=1){
        cout<<*(vet+*i)<<" - ";
    }
    cout<<endl<<endl<<system("pause");
}

void calcula(int *vet){
    float *pares=new float(0);
    float *impares=new float(0);

    for(int *i=new int(0); *i<20; *i+=1){
        if(*(vet+*i)%2==0){
            *pares+=1;
        }
        else{
            *impares+=1;
        }
    }

    cout<<endl<<"A porcentagem de números ímpares é de: "<<((float)*impares/20.00)*100.00<<"%";
    cout<<endl<<"A porcentagem de números pares é de: "<<(*pares/20)*100<<"%";
    system("pause");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int *vet=new int[20];
    int *menu=new int;
    bool *g=new bool(0);

    do{
        system("cls");
        cout<<"/\/\/\/\/\/\/\/\/\/\/\/\/ MENU /\/\/\/\/\/\/\/\/\/\/\/\/\/";
        cout<<endl<<"////// 0- Sair ";
        cout<<endl<<"////// 1- Gerar Vetor";
        cout<<endl<<"////// 2- Achar menor e maior valor";
        cout<<endl<<"////// 3- Mostra ";
        cout<<endl<<"////// 4- Calcula ímpar e par";

        cout<<endl<<"opção: ";
        cin>>*menu;

        if(*menu>4 || *menu<0){
            cout<<endl<<"Informe um valor válido !!";
            continue;
        }
        if(*menu==0){
            system("exit");
        }
        if(*menu==1){
            geravet(vet);
            *g=1;
        }

        if(*menu==2){
            if(*g==1){
                maio(vet);
            }
            else{
                cout<<endl<<"O vetor ainda não foi gerado ";
            }
        }
        if(*menu==3){
            if(*g==1){
                mostra(vet);
            }
            else{
                cout<<endl<<"O vetor ainda não foi gerado";
            }
        }
        if(*menu==4){
            if(*g==1){
                calcula(vet);
            }
            else{
                cout<<endl<<"O vetor ainda não foi gerado";
            }
        }

    }while(menu!=0);
}