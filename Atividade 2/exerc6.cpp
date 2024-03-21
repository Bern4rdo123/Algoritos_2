#include<iostream>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;
int main(){

    setlocale(LC_ALL, "Portuguese");
    string s1;

    cout<<" INFORME UMA PALAVRA ";
    getline(cin, s1);
    cout<<s1;

    for(int i=0; i<=s1.size(); i++){
        s1[i]=toupper(s1[i]);
    }

    cout<<endl<<" PALAVRA TRANSFORMADA EM MAIÚSCOLA: "<<s1;

    for(int i=0; i<=s1.size(); i++){
        s1[i]=tolower(s1[i]);
    }
    cout<<endl<<" PALAVRA TRANSFORMADA EM MINUSCOLO: "<<s1;

    cout<<endl<<" QUANTIDADE DE CARACTERES: "<<s1.size();

    for(int i=0; i<=s1.size(); i++){
        s1[i]=tolower(s1[i]);
    }
    int vogal=0;
    int consoante=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'){
            vogal++;
        }
        else if(isalpha(s1[i])){
            consoante++;
        }
    }
    int numero=0;
    for(int i=0; i<=s1.size();i++){
        if(isdigit(s1[i])){
           numero++;
        }

    }
    int espaco=0;
    for(int i=0; i<=s1.size();i++){
        if(isspace(s1[i])){
            espaco++;
        }
    }

    cout<<endl<<" A QUANTIDADE DE VOGAL: "<<vogal;
    cout<<endl<<" A QUANTIDADE DE CONSOANTES: "<<consoante;
    cout<<endl<<" A QUANTIDADE DE NÚMEROS: "<<numero;
    cout<<endl<<" A QUANTIDADE DE ESPAÇOS: "<<espaco;



}
