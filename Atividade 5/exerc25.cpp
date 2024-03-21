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

struct banco{
    int conta[10];
    int saldo[10];
}banco;

 int cadastra(int &cont){
    cout<<" INFORME O N�MERO DA CONTA QUE DESJA CRIAR: ";
    int nmr;
    cin>>nmr;

    bool existe=false;
    if(cont==0){
        banco.conta[cont]=nmr;

    }
    else{
        for(int i=0; i<cont; i++){
            if(banco.conta[i]==nmr){
                cout<<endl<<" ESSE N�MERO DE CONTA J� EXISTE ";
                cout<<endl;
                system("pause");
                existe=true;
                return 0;
            }
        }
        if(existe==false){
            banco.conta[cont]=nmr;
        }
    }
 }

 int visualiza(int cont){
    system("cls");
    cout<<" INFORME O N�MERO DA CONTA PARA AVERIGUAR: ";
    int cnt;
    cin>>cnt;

    for(int i=0; i<cont; i++){
        if(banco.conta[i]==cnt){
            cout<<endl<<" Conta: "<<banco.conta[i];
            cout<<endl<<" Saldo: "<<banco.saldo[i];
            cout<<endl;
            system("pause");
            return 0;
        }
    }

    cout<<endl<<" O n�mero de conta informado n�o existe ";
    system("pause");
 }

 int deposita(int cont){
    system("cls");
    cout<<" INFORME PARA QUAL CONTA DEVE SER FEITO O DEP�SITO: ";
    int cnt;
    cin>>cnt;

    for(int i=0; i<cont; i++){
        if(banco.conta[i]==cnt){
            cout<<endl<<" INFORME O VALOR A SER DEPOSITADO: ";
            int vlr;
            cin>>vlr;

            banco.saldo[i]+=vlr;
            return 0;
        }
    }
    cout<<endl<<" ESSA CONTA N�O EXISTE !"<<endl;
    system("pause");
 }

 int saca(int cont){
    system("cls");
    cout<<" INFORME PARA QUAL CONTA SER� FEITO O SAQUE: ";
    int cnt;
    cin>>cnt;

    for(int i=0; i<cont; i++){
        if(banco.conta[i]==cnt){
            cout<<endl<<" INFORME O VALOR A SER SACADO: ";
            int vlr;
            cin>>vlr;

            if(vlr>banco.saldo[i]){
                cout<<endl<<" O SAQUE N�O PODE SER MAIOR DO QUE O DISPON�VEL EM CAIXA ! ";
                cout<<endl;
                system("pause");
            }

            banco.saldo[i]-=vlr;
            return 0;
        }
    }
    cout<<endl<<" ESSA CONTA N�O EXISTE !"<<endl;
    system("pause");
 }

 int pix(int cont){
    system("cls");
    cout<<" INFORME DE QUAL CONTA SER� FEITO O PIX: ";
    int c1;
    cin>>c1;
    int c2;

    for(int i=0; i<cont; i++){
        if(banco.conta[i]==c1){
            cout<<endl<<" INFORME PARA QUAL CONTA DEVER� SER FEITO O PIX: ";
            cin>>c2;

            for(int i=0; i<cont; i++){
                if(banco.conta[i]==c2){
                    c2=i;
                }
            }

            cout<<endl<<" INFORME O VALOR DO PIX: ";
            int vlr;
            cin>>vlr;
            if(vlr>banco.saldo[i]){
                cout<<endl<<" O VALOR DO PIX N�O PODE SER MAIOR QUE O VALOR EM CAIXA ";
                return 0;
            }
            banco.saldo[c2]+=vlr;
            banco.saldo[i]-=vlr;
        }
    }



 }

int main()
{
setlocale(LC_ALL, "Portuguese");
 int menu;
 int cont=0;
 for(int i=0; i<10; i++){
    banco.conta[i]=0;
    banco.saldo[i]=0;
 }
do{
    system("cls");
    cout<<" MENU -! ";
    cout<<endl<<" 1- Cadastrar conta ";
    cout<<endl<<" 2- Visualizar dados da conta ";
    cout<<endl<<" 3- Depositar";
    cout<<endl<<" 4- Sacar";
    cout<<endl<<" 5- Pix";
    cout<<endl<<" 0- Sair";


    cout<<endl<<"digite sua op��o: ";
    cin>>menu;

    if(menu>5 || menu<0){
        fflush(stdin);
        cout<<" INFORME UM VALOR V�LIDO ! ";
        system("pause");
    }
    if(menu==0){
        cout<<" Voc� escolheu sair... ";
        break;
    }
    if(menu==1){
        cadastra(cont);
        cont++;
    }
    if(menu==2){
        visualiza(cont);
    }
    if(menu==3){
        deposita(cont);
    }
    if(menu==4){
        saca(cont);
    }
    if(menu==5){
        pix(cont);
    }
}while(menu!=0);

}
