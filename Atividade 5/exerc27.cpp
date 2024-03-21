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
        cout<<" NÃO É PERMITIDO MAIS CARDÁPIOS ";
        system("pause");
        return 0;
    }
    else{
        cout<<endl<<" Informe o código do cardápio: ";
        cin>>receitas[cont].codigo;
        fflush(stdin);

        cout<<endl<<" Informe o nome do cardápio: ";
        getline(cin, receitas[cont].nome);

        cout<<endl<< " Informe os ingredientes do prato, separados por vírgula: ";
        getline(cin, plate[cont].ingredientes);

        cout<<endl<<" Informe o modo de preparo: ";
        getline(cin, plate[cont].preparo);

        cout<<endl<<" Informe a quantidade de calorias desse prato: ";
        cin>> plate[cont].calorias;

        cout<<endl<<" Informe o preço desse cardápio completo: ";
        cin>>receitas[cont].valor;
    }
}

int mostracard(prato plate[], cardapio receitas[], int cont){
    system("cls");
    for(int i=0; i<cont; i++){
        cout<<" Código do cardápio: "<<receitas[i].codigo;
        cout<<endl<<" Nome do cardápio: "<<receitas[i].nome;
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
    cout<<" Informe o código do cardápio que deseja detalhar: ";
    cin>>cod;

    for(int i=0; i<cont; i++){
        if(receitas[i].codigo==cod){
            cout<<endl;
            cout<<" Ingredientes do prato: "<<plate[i].ingredientes;
            cout<<endl;
            cout<<" Calorias do prato: "<<plate[i].calorias;
            cout<<endl;
            cout<<" Método de preparo: "<<plate[i].preparo;
            cout<<endl<<endl;
            system("pause");
            return 0;
        }
    }
    cout<<endl<<" Não foram encontrados cardápios com esse código ";
    cout<<endl;
    system("pause");
}

int cardapiocaro(prato plate[], cardapio receitas[], int cont){
    system("cls");
    cout<<" O cardápio mais caro é com código: ";

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
    cout<<" O valor desse cardápio é: ";
    cout<<maior;
    cout<<endl<<endl;
    system("pause");
}

int cardapiocalorico(prato plate[], cardapio receitas[], int cont){
    system("cls");
    cout<<" O cardápio mais calórico é o com código: ";

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
    cout<<" A quantidade de calorias desse prato é de: ";
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
        cout<<" ## 2- Mostrar cardápio ##"<<endl;
        cout<<" ## 3- Detalhar cardápio ##"<<endl;
        cout<<" ## 4- Mostrar cardápio mais caro ##"<<endl;
        cout<<" ## 5- Mostrar cardápio mais calórico ##"<<endl;

        cout<<" selecione a sua opção: ";
        cin>>menu;

        if(menu>5 || menu<0){
            cout<<endl<<" INFORME UM VALOR VÁLIDO ";
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
