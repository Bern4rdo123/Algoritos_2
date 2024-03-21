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

void cu(int mat[5][5]){
    cout<<mat;
    cout<<endl<<*mat;
    cout<<endl<<**mat;
    cout<<endl<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<(*(mat+i)+j)<<"\t";
        }
        cout<<endl;
    }
cout<<endl<<endl;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<(mat[i*5])<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat[5][5];
    gera(mat);

    cu(mat);
}
