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

void pegaval(){
    ifstream le;
    le.open("arquivo1.txt", ios::in);
    char t[10];

    le.getline(t, 10,',');

    int vet[50];
    int i=0;


   do{
       *(vet+i)=atoi(t);
       i++;
       le.getline(t,10,',');

   } while(!le.eof());
    cout<<vet[0];

    cout<<endl;
    sort(begin(vet), vet+i);

    for(int j=0; j<i; j++){
        cout<<vet[j]<<" - ";
    }

    le.close();

    ofstream escreve;
    escreve.open("arquivo1.txt", ios::trunc);
    escreve.close();
    escreve.open("arquivo1.txt", ios::out);

    for(int j=0; j<i; j++){
        escreve<<vet[j]<<",";
    }

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    ofstream escreve;
    escreve.open("arquivo1.txt", ios::app);

    cout<<"Informe os valores, com vírgula: ";
    string t;
    getline(cin, t);
    escreve<<t;

    escreve.close();

    pegaval();
}