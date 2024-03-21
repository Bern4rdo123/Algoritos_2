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

void gera(int mat[][5]){
    int valores[51] = {}; // Inicialize um array para acompanhar os valores gerados
    int contador = 0;

    // Inicialize a semente para a função rand
    srand(static_cast<unsigned int>(time(nullptr)));

    while (contador < 25) { // Gere 25 valores únicos
        int valor = rand() % 51; // Gere um valor de 0 a 50

        if (valores[valor] == 0) { // Verifique se o valor não foi gerado antes
            mat[contador / 5][contador % 5] = valor; // Armazene o valor na matriz
            valores[valor] = 1; // Marque o valor como gerado
            contador++;
        }
    }
}

void mostra(int mat[5][5]){
    system("cls");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<*(*(mat+i)+j)<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<system("pause");
}

void somadig(int mat[5][5]){
    int soma=0;
    int*s=&soma;
    for(int i=0; i<5; i++){
        *s+=*(mat[i]+i);
    }
    cout<<endl<<"Diagonal principal soma: "<<*s;
    cout<<endl<<endl;
    system("pause");
}

void inverte(int mat[5][5]){
    for(int i=0; i<5/2; i++){
        for(int j=0; j<5; j++){
            swap(mat[i][j], mat[4-i][j]);
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat[5][5];
    gera(mat);
    int menu;
    int *m=&menu;
    bool ge= false;

    do{
        system("cls");
        cout<<endl<<"0- Sair";
        cout<<endl<<"1- Gera matriz";
        cout<<endl<<"2- Mostrar matriz";
        cout<<endl<<"3- Soma das diagonais";
        cout<<endl<<"4- Inverter as linhas da matriz";
        cout<<endl<<"Informe a opção: ";
        cin>>*m;

        if(*m==1){
            gera(mat);
            ge=true;
        }
        if(*m==2){
            if(ge==false){
                cout<<" A matriz ainda nem foi gerada !";
                cout<<endl;
                continue;
            }
            else{
                mostra(mat);
            }
        }
        if(*m==3){
            if(ge== false){
                cout<<" A matriz ainda nem foi gerada !";
                cout<<endl;
                continue;
            }
            else{
                somadig(mat);
            }
        }

        if(*m==4){
            if(ge== false){
                cout<<" A matriz ainda nem foi gerada !";
                cout<<endl;
                continue;
            }
            else{
                inverte(mat);
            }
        }
    }while(menu!=0);
}