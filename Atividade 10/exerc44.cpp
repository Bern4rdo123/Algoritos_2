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
#include<ctype.h>


using namespace std;

void maiu(string tex, int **p){
    string t;
    for(int i=0; i<tex.size(); i++){
        t[i]=tex[i];
        t[i]= toupper(t[i]);
    }
    cout<<endl<<"Para maiúsculo: ";
    for(int i=0; i<tex.size(); i++){
        cout<<t[**p];
        **p=**p+1;
    }
    return;
}

void remove(string tex, int **p){
    **p=0;
    int c=0;
    int *b=&c;
    string t;

    for(int i=0; i<tex.size(); i++){
        if(isalnum(tex[i])!=0){
            t[**p]=tex[i];
            **p=(**p)+1;
        }
    }
    cout<<endl<<"Removendo caracteres especiais: ";
    for(int i=0; i<(**p);i++){
        cout<<t[i];
    }
    **p=0;
}

void branco(string tex, int **p){
    **p=0;
    int c=0;
    int *b=&c;
    string t;

    for(int i=0; i<tex.size(); i++){
        if(isspace(tex[i])==0){
            t[**p]=tex[i];
            **p=(**p)+1;
        }
    }
    cout<<endl<<"Removendo espaços em brancos: ";
    for(int i=0; i<(**p);i++){
        cout<<t[i];
    }
    **p=0;

}

void contavog(string tex, int **p){
    **p=0;
    int c=0;
    int *b=&c;
    string t;

    for(int i=0; i<tex.size(); i++){
        if(tex[i]=='a' || tex[i]=='e' || tex[i]=='i' || tex[i]=='o' || tex[i]=='u'){
            (*b)++;
        }
    }
    cout<<endl<<"A frase tem : "<<*b<<" vogais ";
    for(int i=0; i<(**p);i++){
        cout<<t[i];
    }
    **p=0;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    string tex;
    int cont=0;
    int *p=&cont;
    getline(cin, tex);

    maiu(tex, &p);
    remove(tex, &p);
    branco(tex, &p);
    contavog(tex, &p);
}
