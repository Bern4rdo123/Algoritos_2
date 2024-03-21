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

struct venda{
    string cliente;
    float totalvenda;
};

struct produto{
    int valorp;
    float desconto;
}saidas[10];

void compra(int conta){
    system("cls");
    cout<<" Informe o código do produto (0 para sair): ";
    int cod;
    int quant;
    cin>>cod;
    if(cod>9 || cod<0){
        cout<<endl<<" Digite um número dentro do intervalo dito: ";
        return;
    }
    if(cod==0){
        return;
    }
    if(cod==1){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=28*quant;
        saidas[conta].desconto=0.07;
        conta++;
    }
    if(cod==2){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=6.30*quant;
        saidas[conta].desconto=0.05;
        conta++;
    }
    if(cod==3){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=22*quant;
        saidas[conta].desconto=0.05;
        conta++;
    }
    if(cod==4){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=17.80*quant;
        saidas[conta].desconto=0.06;
        conta++;
    }
    if(cod==5){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=5.50*quant;
        saidas[conta].desconto=0.05;
        conta++;
    }
    if(cod==6){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=11*quant;
        saidas[conta].desconto=0.1;
        conta++;
    }
    if(cod==7){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=4.50*quant;
        saidas[conta].desconto=0.02;
        conta++;
    }
    if(cod==8){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=138.00*quant;
        saidas[conta].desconto=0.07;
        conta++;
    }
    if(cod==9){
        cout<<endl<<" Informe a quantidade: ";
        cin>>quant;
        saidas[conta].valorp+=8.00*quant;
        saidas[conta].desconto=0.05;
        conta++;
    }

}

void geravenda(venda vendas[], int &cont){
    system("cls");
    fflush(stdin);
    cout<<"Informe o nome do cliente: ";
    getline(cin, vendas[0].cliente);
    compra(cont);
    cont++;
}

void mostravenda(venda vendas[], int &cont){
    float soma=0;
    system("cls");
    for(int i=0; i<cont; i++){
        cout<<"Nome: "<<vendas[i].cliente;
        cout<<endl<<"Total da venda: ";

        for(int j=0; j<cont; j++){
            soma+=saidas[j].valorp-(saidas[j].valorp*saidas[j].desconto);
        }
        cout<<soma;
    }
}

void consultacliente(venda vendas[], int &cont){
    system("cls");
    fflush(stdin);
    cout<<"Informe o nome do cliente para consulta: ";
    string nome;
    getline(cin, nome);

    for(int  i=0; i<cont; i++){
        if(nome==vendas[i].cliente){
            cout<<endl<<" A venda: ";
            cout<<vendas[i].totalvenda;
        }
    }
}

void totalvendas(venda vendas[], int &cont){
    system("cls");
    cout<<"Total de vendas até agora: ";
    float soma=0;

    for(int i=0; i<cont; i++){
        soma+=vendas[i].totalvenda;
    }
    cout<<soma;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;
    venda vendas[10];
    int cont=0;

    for(int i=0; i<10; i++){
        vendas[i].cliente="";
        vendas[i].totalvenda=0;
    }
    do{
        system("cls");
        cout<<" menu ";
        cout<<endl<<"0- Sair";
        cout<<endl<<"1- Registrar venda";
        cout<<endl<<"2- Mostrar todas as vendas";
        cout<<endl<<"3- Consultar venda por cliente";
        cout<<endl<<"4- Mostrar total das vendas";
        cout<<endl<<"Selecione a sua opção: ";
        cin>>menu;

        if(menu>4 || menu<0){
            cout<<endl<<" Insira um valor válido dentro do determinado !";
            system("pause");
        }
        if(menu==1){
            geravenda(vendas, cont);
        }
        if(menu==2){
            mostravenda(vendas, cont);
        }
        if(menu==3){
            consultacliente(vendas, cont);
        }
        if(menu==4){
            totalvendas(vendas, cont);
        }
    }while(menu!=0);
}