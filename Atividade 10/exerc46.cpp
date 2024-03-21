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

void gera(int vet1[], int vet2[]){
    for(int i=0; i<10; i++){
        *(vet1+i)=rand()%100;
        *(vet2+i)=rand()%100;
    }

    for(int i=0; i<10; i++){
        cout<<*(vet1+i)<<" - ";
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        cout<<*(vet2+i)<<" - ";
    }

}

void inter(int vet1[], int vet2[], int junta[]){
    int c=0;
    int *cc=&c;
    int b=0;
    int *bb=&b;

    for(int i=0; i<20; i=i+2){
        *(junta+i)=*(vet1+*cc);
        *(junta+1+i)=*(vet2+*cc);
        (*cc)++;

    }
    cout<<endl<<endl;
    for(int i=0; i<20; i++){
        cout<<*(junta+i)<<" - ";
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet1[10];
    int vet2[10];
    int junta[20];

    gera(vet1,vet2);
    inter(vet1,vet2,junta);
}