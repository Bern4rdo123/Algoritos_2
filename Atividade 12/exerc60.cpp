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

void geravet(int *vet){
    for(int *i=new int(0); *i<20; *i+=1){
        *(vet+*i)=rand()%100;
        for(int *j=new int(0); *j<*i; *j+=1){
            if(*(vet+*j)==*(vet+*i)){
                *i-=1;
            }
        }
    }
    for(int *i=new int(0); *i<20; *i+=1){
        cout<<*(vet+*i)<<"  ";
    }

}

void ajeita(int *vet){
    int *c=new int(0);
    int *arm=new int(*vet);

    for(int *i=new int(0); *i<20; *i+=1){
        *(vet+*c)=*(vet+*c+1);
        (*c)++;
    }
    *(vet+*c-1)=*arm;
    cout<<endl;
    for(int *i=new int(0); *i<20; *i+=1){
        cout<<*(vet+*i)<<"  ";
    }

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *vet=new int[20];

    geravet(vet);
    ajeita(vet);
}