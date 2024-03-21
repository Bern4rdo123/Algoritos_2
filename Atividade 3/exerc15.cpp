#include<iostream>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;
int gerou=0;

void gera(int v1[]){

    for(int j=0; j<sizeof(v1); j++){
        v1[j]=rand()%51+35;
        for(int i=0; i<j; i++){
            if(v1[j]==v1[i]){
                j--;
                break;
            }
        }
    }
    gerou=1;

}

void mostra(int vet[]){

    if(gerou==0){
        cout<<endl<<" O VETOR AINDA NÃO FOI GERADO !"<<endl;;
        system("pause");
    }
    else{
        for(int i=0; i<sizeof(vet); i++){
            cout<<vet[i]<<" - ";
        }
        cout<<endl;
        system("pause");
    }

}
void intersec(int v1[], int v2[]){

    int gremio[sizeof(v1)];
    int cont=0;

    for(int i=0; i<sizeof(v1); i++){
        for(int j=0; j<sizeof(v2); j++){
            if(v1[i]==v2[j]){
                gremio[cont]=v1[i];
                cont++;
                break;
            }
        }
    }

    cout<<" Os valores que se interseccionam são: ";
    for(int i=0; i<cont; i++){
        cout<<gremio[i]<<" - ";
    }
    cout<<endl;
    system("pause");
}

int main(){

    int x1[10];
    int x2[10];
    int menu;
    do{
        system("cls");

        cout<<" ---------------------- MENU --------------------"<<endl;
        cout<<" -- 0) Sair"<<endl;
        cout<<" -- 1) Gerar vetor "<<endl;
        cout<<" -- 2) Mostrar vetores"<<endl;
        cout<<" -- 3) Intersecção de vetores"<<endl;
        cout<<" INFORME MENU: ";
        cin>>menu;

        if(menu==1){
            gera(x1);
            gera(x2);
        }

        if(menu==2){
            mostra(x1);
            mostra(x2);
        }
        if(menu==3){
            intersec(x1,x2);
        }


    }while(menu!=0);


}
