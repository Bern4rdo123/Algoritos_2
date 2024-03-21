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

void diag1(int mat[][5]){

    cout<<endl<<" elemementos da diagonal principal: ";
    for(int i=0; i<5; i++){
        cout<<mat[i][i]<<" - ";
    }
    system("pause");

}

void gera(int mat[][5]){

    for(int i=0; i<5; i++){
        for(int j=0;j<5;j++){
            mat[i][j]=rand()%51;

            for(int v=0; v<i; v++){
                if(v==i){
                    for(int t=0; t<=j; t++){
                        if(mat[v][t]==mat[i][j]){
                            if(j==0){
                                i--;
                                j=4;
                            }
                            else{
                                j--;
                            }
                        }
                    }
                }
                else{
                    for(int t=0; t<5; t++){
                        if(mat[v][t]==mat[i][j]){
                            if(mat[v][t]==mat[i][j]){
                            if(j==0){
                                i--;
                                j=4;
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

void mattrans(int mat[][5]){
    cout<<endl<<" Diagonal secundária: ";
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i+j==4){
                cout<<endl<<mat[i][j]<<" - ";
            }
        }
    }
    system("pause");
}

void mostra(int mat[][5]){

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<" Matriz transposta: ";
    cout<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<mat[j][i]<<"\t";
        }
        cout<<endl;
    }
    system("pause");

}


int main(){

    int mat[5][5];
    int foi=0;
    setlocale(LC_ALL,"portuguese");
        int m;

do{
        system("cls");
    cout<<" Menu\n 0- Sair \n 1- Gerar valores \n 2- Mostrar matriz e transposta \n 3- Mostrar diagonal principal \n 4- Mostrar diagonal secundária";


    cout<<endl<<" opção: ";
    cin>>m;

    if(m<0 || m>4){
        system("cls");
        cout<<" Informe um valor dentro do intervalo permitido ";
    }
    else if(m==1){

        foi=1;
        gera(mat);

    }

    if(m==2){
        if(foi==0){
            cout<<endl<<" AINDA NÃO FORAM GERADOS OS VETORES !";
            system("pause");
        }
        else{
            mostra(mat);
        }
    }
    if(m==3){
        if(foi==0){
            cout<<endl<<" AINDA NÃO FORAM GERADA A MATRIZ ! ";
            system("pause");
        }
        else{
            diag1(mat);
        }
    }
    if(m==4){
        if(foi==0){
            cout<<endl<<" AINDA NÃO FOI GERADA A MATRIZ !";
            system("pause");
        }
        else{
            mattrans(mat);
        }
    }



}while(m!=0);

}
