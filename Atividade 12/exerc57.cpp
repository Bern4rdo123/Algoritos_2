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
    int *vet=new int[(*n)*(*n)];
    int *cont=new int(pow(*n,2));

    for(int *i=new int(0); *i<pow(*n,2); *i+=1){
        *(vet+*i)=rand()%*cont;
    }

    *cont=0;
    for(int *i=new int(0); *i<pow(*n, 2); *i+=1){
        cout<<*(vet+*i)<<"  ";
        *cont+=1;
        if(*cont==*n){
            cout<<endl;
            *cont=0;
        }

    }

    cout<<endl<<"Soma dos elementos da diagonal principal - DP: ";

    int *c=new int(1);
    int *soma=new int(0);

    for(int *i=new int(0); *i<pow(*n, 2); *i+=1){
        if(*c==1){
            *soma+=*(vet+*i);
        }
        if(*c==*n+1){
            *c=0;
        }
        *c+=1;
    }
    cout<<*soma;

    cout<<endl<<"Maior e menor elemento da diagonal secundária - DS: ";

    int *ma=new int(0);
    int *me=new int(*(vet+*n));
    *c=0;
    for(int *i=new int(0); *i<pow(*n, 2); *i+=1){
        if(*c==*n-1 and *i<pow(*n,2)-(*n-1)){
            if(*(vet+*i)>*ma){
                *ma=*(vet+*i);

            }
            if(*(vet+*i)<*me){
                *me=*(vet+*i);
            }
            *c=0;
        }
        *c+=1;
    }
    cout<<*ma<<" ,  "<<*me;

    cout<<endl<<"Diferença das somas dos elementos acima da DP e abaixo da DP: ";

    *c=1;
    delete c;
    *c=1;
    int *somacima=new int(0);
    int *somabaixo=new int(0);
     int *t=new int(*n);

    for(int *i=new int(0); *i<pow(*n, 2); *i+=1){
        if(*c==1){
            for(int *j=new int (0); *j<*n-*t;*j+=1){
                cout<<"ent ";
                *somacima+=*(vet+*i+*j);
            }
            for(int *j=new int(0); *j<*n-*t; *j+=1){
                *somabaixo+=*(vet+*i-*(j-1));
            }
            *t-=1;
        }
        if(*c==*n+1){
            *c=0;
        }
        *c+=1;
    }
    cout<<endl<<"Soma da parte de cima: "<<*somacima;
    cout<<endl<<"Soma da parte de baixo: "<<*somabaixo;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout<<"Insira um valor n: ";
    int *n=new int;
    cin>>*n;

    geravet(n);
}