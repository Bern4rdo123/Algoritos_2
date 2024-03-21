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

struct prato{
    string ingredientes;
    string preparo;
    int calorias;
};

struct cardapio{
    int codigo;
    string nome;
    prato x;
    float valor;
};

int insere(prato plate[],cardapio receitas[],int cont){
    system("cls");
    if(cont>20){
        cout<<" N�O � PERMITIDO MAIS CARD�PIOS ";
        system("pause");
        return 0;
    }
    else{
        cout<<endl<<" Informe o c�digo do card�pio: ";
        cin>>receitas[cont].codigo;
        fflush(stdin);

        cout<<endl<<" Informe o nome do card�pio: ";
        getline(cin, receitas[cont].nome);

        cout<<endl<< " Informe os ingredientes do prato, separados por v�rgula: ";
        getline(cin, plate[cont].ingredientes);

        cout<<endl<<" Informe o modo de preparo: ";
        getline(cin, plate[cont].preparo);

        cout<<endl<<" Informe a quantidade de calorias desse prato: ";
        cin>> plate[cont].calorias;

        cout<<endl<<" Informe o pre�o desse card�pio completo: ";
        cin>>receitas[cont].valor;
    }
}

int mostracard(prato plate[], cardapio receitas[], int cont){
    system("cls");
    for(int i=0; i<cont; i++){
        cout<<" C�digo do card�pio: "<<receitas[i].codigo;
        cout<<endl<<" Nome do card�pio: "<<receitas[i].nome;
        cout<<fixed;
        cout<<endl<<" Valor: "<<receitas[i].valor;
        cout.width(40);
        cout.fill('-');
        cout<<endl<<"-";
    }
    cout<<endl<<endl<<system("pause");
}

int detalha(prato plate[], cardapio receitas[], int cont){
    system("cls");
    int cod;
    cout<<" Informe o c�digo do card�pio que deseja detalhar: ";
    cin>>cod;

    for(int i=0; i<cont; i++){
        if(receitas[i].codigo==cod){
            cout<<endl;
            cout<<" Ingredientes do prato: "<<plate[i].ingredientes;
            cout<<endl;
            cout<<" Calorias do prato: "<<plate[i].calorias;
            cout<<endl;
            cout<<" M�todo de preparo: "<<plate[i].preparo;
            cout<<endl<<endl;
            system("pause");
            return 0;
        }
    }
    cout<<endl<<" N�o foram encontrados card�pios com esse c�digo ";
    cout<<endl;
    system("pause");
}

int cardapiocaro(prato plate[], cardapio receitas[], int cont){
    system("cls");
    cout<<" O card�pio mais caro � com c�digo: ";

    int maior=receitas[0].valor;
    int cod=receitas[0].codigo;
    for(int i=0; i<cont; i++){
        if(receitas[i].valor>maior){
            maior=receitas[i].valor;
            cod=receitas[i].codigo;
        }
    }
    cout<<cod;
    cout<<endl;
    cout<<" O valor desse card�pio �: ";
    cout<<maior;
    cout<<endl<<endl;
    system("pause");
}

int cardapiocalorico(prato plate[], cardapio receitas[], int cont){
    system("cls");
    cout<<" O card�pio mais cal�rico � o com c�digo: ";

    int calor=plate[0].calorias;
    int cod;

    for(int i=0; i<cont; i++){
        if(plate[i].calorias>calor){
            calor=plate[i].calorias;
            cod=receitas[i].codigo;
        }
    }
    cout<<cod;
    cout<<endl;
    cout<<" A quantidade de calorias desse prato � de: ";
    cout<<calor;
    cout<<endl<<endl;
    system("pause");
}

main()
{
setlocale(LC_ALL, "Portuguese");
    int menu;
    prato plate[20];
    cardapio receitas[20];
    int cont=0;

    do{
        system("cls");
        cout<<" ## menu ##"<<endl;
        cout<<" ## 0- Sair ##"<<endl;
        cout<<" ## 1- Inserir ##"<<endl;
        cout<<" ## 2- Mostrar card�pio ##"<<endl;
        cout<<" ## 3- Detalhar card�pio ##"<<endl;
        cout<<" ## 4- Mostrar card�pio mais caro ##"<<endl;
        cout<<" ## 5- Mostrar card�pio mais cal�rico ##"<<endl;

        cout<<" selecione a sua op��o: ";
        cin>>menu;

        if(menu>5 || menu<0){
            cout<<endl<<" INFORME UM VALOR V�LIDO ";
            system("pause");
            continue;
        }

        if(menu==1){
            insere(plate,receitas, cont);
            cont++;
        }
        if(menu==2){
            mostracard(plate, receitas, cont);
        }
        if(menu==3){
            detalha(plate, receitas, cont);
        }
        if(menu==4){
            cardapiocaro(plate, receitas, cont);
        }
        if(menu==5){
            cardapiocalorico(plate, receitas,cont);
        }


    }while(menu!=0);

}
