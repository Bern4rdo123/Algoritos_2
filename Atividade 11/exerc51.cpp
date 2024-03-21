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

void geravet(int *a){
    for(int i=0; i<10; i++){
        *(a+i)=rand()%49+1;
    }
}

void novovet(int *a){
    int *c=new int(0);
    for(int i=0; i<10; i++){
        if(*(a+i)<26){
           *c+=1;
        }
    }
    if(*c==0){
        cout<<"Não há numeros menores que 26 !"<<endl;
        return;
    }
    int *x=new int[*c];
    *c=0;
    for(int i=0; i<10; i++){
        if(*(a+i)>25){
            *c+=1;
        }
    }
    if(*c==0){
        cout<<"Não há numeros maiores que 25 !"<<endl;
        return;
    }
    int *y=new int[*c];

    int *cmen=new int(0);
    int *cmai=new int(0);

    for(int i=0; i<10; i++){
        if(*(a+i)>25){
            *(x+*cmen)=*(a+i);
            *cmen+=1;
        }
        else{
            *(y+*cmai)=*(a+i);
            *cmai+=1;
        }
    }
    cout<<endl<<"Vetor x: ";
    for(int i=0; i<*cmen; i++){
        cout<<*(x+i)<<" - ";
    }

    cout<<endl<<"Vetor Y: ";
    for(int i=0; i<*cmai; i++){
        cout<<*(y+i)<<" - ";
    }
}

int main(){
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");
    int *a=new int [10];

    geravet(a);
    cout<<"Vetor original: ";
    for(int i=0; i<10; i++){
        cout<<*(a+i)<<" - ";
    }
    novovet(a);
}