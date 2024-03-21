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

void gerador( int mat[][7]){

for(int i=0; i<7; i++){
        for(int j=0;j<7;j++){
            mat[i][j]=rand()%51;

            for(int v=0; v<i; v++){
                if(v==i){
                    for(int t=0; t<=j; t++){
                        if(mat[v][t]==mat[i][j]){
                            if(j==0){
                                i--;
                                j=6;
                            }
                            else{
                                j--;
                            }
                        }
                    }
                }
                else{
                    for(int t=0; t<7; t++){
                        if(mat[v][t]==mat[i][j]){
                            if(mat[v][t]==mat[i][j]){
                            if(j==0){
                                i--;
                                j=6;
                            }
                            else{
                                j--;
                            }
                        }
                        }
                    }
                }
            }
        }
    }
}

void mostra(int mat[][7]){

    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void encontramaior(int mat[][7]){
    system("cls");
    cout<<endl<<" Matriz original: "<<endl;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    int maior=0;
    int menor;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(mat[i][j]>maior){
                maior=mat[i][j];
            }
        }
        mat[i][i]=maior;
        maior=0;
    }

    cout<<endl<<" Matriz modificada: "<<endl;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    system("pause");


}

simetrica(int mat[][7]){

    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(mat[i][j]!=mat[j][i]){
                cout<<endl<<endl<<" A matriz não é simétrica !"<<endl;
                return 0;
            }
        }
    }

}

void triangulo(int mat[][7]){

    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(i>j){
                mat[i][j]=0;
            }
        }
    }


}
main()
{
setlocale(LC_ALL, "Portuguese");

int mat[7][7];
int menu;
int gerado=0;

do{
    cout<<endl<<"MENU\n 0- Sair \n 1-Gerar valores para matriz \n 2- Mostrar a matriz \n 3- Encontrar o maior elemento de cada linha \n 4- Verifica se a matriz é simétrica \n 5- Transforma em matriz triangular superior \n";
    cout<<"opção: ";
    cin>>menu;

    if(menu==1){
        gerador(mat);
        gerado=1;
    }

    if(menu==2){
        if(gerado==1){
            mostra(mat);
        }
        else{
            cout<<endl<<" PRIMEIRO GERE A MATRIZ";
        }
    }

    if(menu==3){
        if(gerado==1){
            encontramaior(mat);
        }
        else{
            cout<<endl<<" PRIMEIRO GERE A MATRIZ";
        }
    }
    if(menu==4){
        if(gerado==1){
            simetrica(mat);
        }
        else{
            cout<<endl<<" PRIMEIRO GERE A MATRIZ";
        }
    }

    if(menu==5){
        if(gerado==1){
            triangulo(mat);
        }
        else{
            cout<<endl<<" PRIMEIRO GERE A MATRIZ";
        }
    }
}while(menu!=0 || menu>5 || menu<0);


}
