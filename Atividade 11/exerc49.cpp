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

void pega(int *vet, int *c){
    cout<<"Informe o valor "<<*c+1<<": ";
    cin>>*(vet+*c);
}

void ordena(int *vet, int *c){

    int i, j, t;

    // Sort the numbers using pointers
    for (i = 0; i < *c; i++) {

        for (j = i + 1; j < *c; j++) {

            if (*(vet + j) < *(vet + i)) {

                t = *(vet + i);
                *(vet + i) = *(vet + j);
                *(vet + j) = t;
            }
        }
    }
    for(int b=0; b<*c;b++){
        cout<<*(vet+b)<<" - ";
    }
    cout<<endl;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *c=new int(0);
    int *vet=new int[8];


    for(int i=0; i<8; i++){
        pega(vet, c);
        (*c)++;
        ordena(vet, c);
    }
}