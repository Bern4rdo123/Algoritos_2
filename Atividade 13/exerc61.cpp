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

void verifica(string nomearq){
    ifstream le;
    le.open("arquivo1.txt", ios::in);
    char c;
    int *contacarac=new int();
    int *contacons=new int(0);
    int *contavogal=new int(0);

    while(le.get(c)){
        *contacarac+=1;
        if(c=='a'|| c=='e' || c=='i'|| c=='o'|| c=='u'){
            *contavogal+=1;
        }
        else{
            *contacons+=1;
        }
    }

    cout<<"O arquivo tem "<<*contacarac<<" caracteres\n";
    cout<<"O arquivo tem "<<*contavogal<<" vogais\n";
    cout<<"O arquivo tem "<<*contacons<<" consoantes\n";
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    setlocale(LC_ALL, "Portuguese");

    string nomearq;

    ofstream escreve;
    escreve.open("arquivo1.txt", ios::app);
    string nome;

    getline(cin,nome);
    escreve<<nome<<"\n";

    escreve.close();

    ifstream le;
    le.open("arquivo1.txt", ios::in);

    cout<<"O conteúdo é: ";
    char c;
    while(le.get(c)){
        cout<<c;
    }
    le.close();

    verifica(nomearq);
}