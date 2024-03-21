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

void geravet(int *a, int n){
    for(int i=0; i<n;i++){
        *(a+i)=rand()%29+1;
    }
}

void divide(int *a, int *b){
    int *c=new int(0);
    for(int i=0; i<10; i++){
        cout<<endl<<"Número "<<*(a+i)<<": "<<endl;

        for(int j=0; j<5; j++){
            if(*(a+i)%*(b+j)==0){
                cout<<"Divisível por "<<*(b+j)<<" na posição "<<j+1<<endl;
                *c=1;
            }
        }
        if(*c==0){
            cout<<"Não possui divisores no segundo vetor "<<endl;
        }
        *c=0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int *a=new int[10];
    int *b=new int[5];

    geravet(a, 10);
    geravet(b,5);

    divide(a,b);
}