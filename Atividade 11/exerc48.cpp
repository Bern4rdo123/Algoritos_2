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

void gera(int *p2, int *p1){
    for(int i=0; i<10; i++){
        *(p2+i)=rand() % 12;
        *(p1+i)=rand()%12;
    }

    for(int i=0; i<10; i++){
        cout<<*(p2+i)<<" - ";
    }
    cout<<endl;

    for(int i=0; i<10; i++){
        cout<<*(p1+i)<<" - ";
    }
}

void ajeita(int *p1, int *p2){
    cout<<endl<<"a) União dos vetores: "<<endl;

    bool *b= new bool(0);

    int *pj= new int[20];
    int *c=new int(0);
    for(int i=0; i<10; i++){
        for(int j=0; j<i; j++){
            if(*(p1+j)==*(p1+i)){
                *b=1;
                break;
            }
        }
        if(*b==0){
            *(pj+*c)=*(p1+i);
            (*c)++;
        }
        *b=0;
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<*c; j++){
            if(*(p2+i)==*(pj+j)){
                *b=1;
                break;
            }
        }
        if(*b==0){
            *(pj+*c)=*(p2+i);
            (*c)++;
        }
        *b=0;
    }
    for(int i=0; i<*c; i++){
        cout<<*(pj+i)<<" - ";
    }
}

void diferenca(int *p1, int *p2){

    cout<<endl<<"b) Diferença dos vetores: "<<endl;
    int *c=new int(0);
    int *pj=new int[20];
    bool b=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<i; j++){
            if(*(p1+i)==*(p2+j)){
                b=1;
                break;
            }
            for(int t=0; t<*c; t++){
                if(*(pj+t)==*(p1+i)){
                    b=1;
                    break;
                }
            }
        }
        if(b==0){
            *(pj+*c)=*(p1+i);
            (*c)++;
            b=0;
        }
        b=0;
    }

    for(int i=0; i<*c; i++){
        cout<<*(pj+i)<<" - ";
    }

}

void soma(int *p1, int *p2){
    int *c=new int (0);
    int *j=new int[10];
    for(int i=0; i<10; i++){
        *(j+*c)=*(p1+i)+*(p2+i);
        *c=*c+1;
    }
    cout<<endl<<"c) Soma dos vetores: "<<endl;
    for(int i=0; i<*c; i++){
        cout<<*(j+i)<<" - ";
    }
}

void produto(int *p1, int *p2){
    int *c=new int (0);
    int *j=new int[10];
    for(int i=0; i<10; i++){
        *(j+*c)=*(p1+i)**(p2+i);
        *c=*c+1;
    }
    cout<<endl<<"c) Multiplicação dos vetores: "<<endl;
    for(int i=0; i<*c; i++){
        cout<<*(j+i)<<" - ";
    }
}

void inter(int *p1, int *p2){
    int *c=new int (0);
    int *jj=new int[10];
    bool b=0;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(*(p1+i)==*(p2+j)){

                for(int g=0; g<*c; g++){
                    if(*(p1+i)==*(jj+g)){
                        b=1;
                    }
                }
                if(b==0){
                    cout<<"emtri ";
                    *(jj+*c)=*(p1+i);
                    (*c)++;
                    b=0;
                }
                b=0;
            }
        }
    }
    cout<<endl<<"c) Intersec dos vetores: "<<endl;
    for(int i=0; i<*c; i++){
        cout<<*(jj+i)<<" - ";
    }
}

int main(){
    //srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");
    int *p1= new int[10];
    int *p2=new int [10];

    gera(p2, p1);
    ajeita(p1, p2);
    diferenca(p1,p2);
    soma(p1, p2);
    produto(p1,p2);
    inter(p1, p2);

}