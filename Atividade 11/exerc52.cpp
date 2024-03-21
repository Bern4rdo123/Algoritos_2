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

void pega(string *nome, float *sal, int *ano){
    for(int i=0; i<5; i++) {
        cout << endl << "Informe o nome do candidato: ";
        fflush(stdin);
        getline(cin,*(nome+i));
        cout<<endl<<"Informe o salário: ";
        cin>>*(sal+i);
        cout<<endl<<"Informe o tempo de empresa: ";
        cin>>*(ano+i);
    }
}

void mostra(string *nome, float *sal, int *ano){
    cout<<endl<<"Não haverão acrescimo: ";
    for(int i=0; i<5; i++){
        if(*(ano+i)<5){
            if(*(sal+i)>1800){
               cout<<*(nome+i)<<", ";
            }
        }
    }
    cout<<endl<<"Acrescimo de 15%: ";
    for(int i=0; i<5; i++){
        if(*(ano+i)>5){
            if(*(sal+i)<1800){
                cout<<*(nome+i)<<", ";
            }
        }
    }
    cout<<endl<<"Acréscimo de 10%: ";
    for(int i=0; i<5; i++){
        if(*(ano+i)>5){
            if(*(sal+i)>1800){
                cout<<*(nome+i)<<", ";
            }
        }
    }
    cout<<endl<<"Acrescimo de 5%: ";
    for(int i=0; i<5; i++){
        if(*(ano+i)<=5){
            if(*(sal+i)<1800){
                cout<<*(nome+i)<<", ";
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    string *nome=new string[5];
    float *sal=new float[5];
    int *ano=new int[5];

    pega(nome, sal, ano);
    mostra(nome, sal,ano);
}