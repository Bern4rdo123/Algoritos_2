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
    cout<<" INFORME O NÚMERO DA CONTA QUE DESJA CRIAR: ";
    int nmr;
    cin>>nmr;

    bool existe=false;
    if(cont==0){
        banco.conta[cont]=nmr;

    }
    else{
        for(int i=0; i<cont; i++){
            if(banco.conta[i]==nmr){
                cout<<endl<<" ESSE NÚMERO DE CONTA JÁ EXISTE ";
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
    cout<<" INFORME O NÚMERO DA CONTA PARA AVERIGUAR: ";
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

    cout<<endl<<" O número de conta informado não existe ";
    system("pause");
 }

 int deposita(int cont){
    system("cls");
    cout<<" INFORME PARA QUAL CONTA DEVE SER FEITO O DEPÓSITO: ";
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
    cout<<endl<<" ESSA CONTA NÃO EXISTE !"<<endl;
    system("pause");
 }

 int saca(int cont){
    system("cls");
    cout<<" INFORME PARA QUAL CONTA SERÁ FEITO O SAQUE: ";
    int cnt;
    cin>>cnt;

    for(int i=0; i<cont; i++){
        if(banco.conta[i]==cnt){
            cout<<endl<<" INFORME O VALOR A SER SACADO: ";
            int vlr;
            cin>>vlr;

            if(vlr>banco.saldo[i]){
                cout<<endl<<" O SAQUE NÃO PODE SER MAIOR DO QUE O DISPONÍVEL EM CAIXA ! ";
                cout<<endl;
                system("pause");
            }

            banco.saldo[i]-=vlr;
            return 0;
        }
    }
    cout<<endl<<" ESSA CONTA NÃO EXISTE !"<<endl;
    system("pause");
 }

 int pix(int cont){
    system("cls");
    cout<<" INFORME DE QUAL CONTA SERÁ FEITO O PIX: ";
    int c1;
    cin>>c1;
    int c2;

    for(int i=0; i<cont; i++){
        if(banco.conta[i]==c1){
            cout<<endl<<" INFORME PARA QUAL CONTA DEVERÁ SER FEITO O PIX: ";
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
                cout<<endl<<" O VALOR DO PIX NÃO PODE SER MAIOR QUE O VALOR EM CAIXA ";
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


    cout<<endl<<"digite sua opção: ";
    cin>>menu;

    if(menu>5 || menu<0){
        fflush(stdin);
        cout<<" INFORME UM VALOR VÁLIDO ! ";
        system("pause");
    }
    if(menu==0){
        cout<<" Você escolheu sair... ";
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
