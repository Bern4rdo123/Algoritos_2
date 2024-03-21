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



struct mes {
    int codigo;
    string nome;
    string abrev;
    int numerodias;
}mes;

int peganumero(){
    int soma=3;
    int mais;
    if(mes.codigo==1){
        soma=mes.numerodias;
    }
    else{
        for(int i=1; i<mes.codigo; i++){
            if(mes.codigo%2==0){
                soma+=30;
            }
            else{
                soma+=31;
            }
        }


        cout<<endl<<" INFORME A DATA: ";
        cin>>mais;
        soma+=mais;
    }
    cout<<soma;

    cout<<endl<<" DIA ESCOLHIDO: "<<mais;
    cout<<endl<<mes.nome;
    cout<<endl<<mes.abrev;



}

main()
{
setlocale(LC_ALL, "Portuguese");

    cout<<" INFORME O CÓDIGO DO MÊS: ";
    cin>>mes.codigo;
    cout<<endl<<" INFORME O NOME DO MÊS POR EXTENSO: ";
    cin>>mes.nome;
    cout<<endl<<" INFORME A ABREVIAÇÃO DE TRÊS LETRAS: ";
    cin>>mes.abrev;

    if(mes.codigo%2==1){
        mes.numerodias=30;
    }
    else if(mes.codigo==2){
        mes.numerodias==28;
    }
    else{
        mes.numerodias==31;
    }

    peganumero();
}
