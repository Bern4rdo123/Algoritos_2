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

void perfeito(int &valor,int cont, int &soma){
    if(soma>valor){
        cout<<" esse número não é quadrado";
        return;
    }
    if(soma==valor){
        cout<<" Esse número é quadrado perfeito";
        return;
    }
    soma+=cont;
    perfeito(valor, cont+=2, soma );

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor;
    int cont=1;
    int soma=0;

    cout<<" INSIRA UM VALOR PARA VERFICAR SE É OU NÃO PERFEITO: ";
    cin>>valor;

    perfeito(valor, cont, soma);
}