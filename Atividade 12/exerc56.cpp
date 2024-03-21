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

void geravet(int *n){
    delete n;
    n=new int[*n];
    for(int *i=new int(0); *i<*n; *i+=1){
        *(n+*i)=rand()%50;
    }
}

void moda(int *c){
    int *cont=new int(0);
    int *num=new int(*c);
    int *maior=new int(0);
    for(int *i=new int(0); *i<*c; *i+=1){
        for(int *j=new int(0); *j<*c; *j+=1){
            if(*(c+*i)==*(c+*j)){
                *cont+=1;

            }
        }
        if(*cont>*maior){
            *maior=*cont;
            *num=*(c+*i);
        }
        *cont=0;
    }
    cout<<*maior<<" apareceu o "<<*num;

    for(int i=0; i<*c; i++){
        cout<<*(c+i)<<" - ";
    }
}

int main(){
    int *n=new int (0);
    cout<<"Informe o tamanho do vetor: ";
    cin>>*n;

    int *c=new int[*n];

    geravet(c);
    moda(n);

}
