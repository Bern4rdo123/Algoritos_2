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

void geravet(int vet[]){
    for(int i=0; i<sizeof(vet); i++){
        *(vet+i)=rand()%25+30;
        for(int j=0; j<i;j++){
            if(*(vet+i)==*(vet+j)){
                i--;
            }
        }
    }
    for(int i=0;i<sizeof(vet); i++){
        cout<<*(vet+i)<<"-";
    }
    return;
}

void troca(int vet[]){
    int num;
    int *p=&num;

    cout<<endl<<endl;
    for(int i=0; i<sizeof(vet)/2; i++){
        swap(*(vet+i),*((vet+7)-i));
    }
    for(int i=0;i<sizeof(vet); i++){
        cout<<*(vet+i)<<"-";
    }

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[10];

    geravet(vet);
    troca(vet);
}