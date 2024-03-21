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

int geravet(int v[], int v2[]){
    for(int i=0; i<10; i++){
        v[i]=rand()%20+1;
        for(int j=0; j<i; j++){
            if(v[i]==v[j]){
                i--;
                break;
            }
        }
    }

    for(int i=0; i<10; i++){
        v2[i]=rand()%20+1;
        for(int j=0; j<i; j++){
            if(v2[i]==v2[j]){
                i--;
                break;
            }
        }
    }
    return 0;
}

void troca(int v[], int v2[]){
    int *p=&v[0];
    int *j=&v2[9];
    for(int i=0; i<10; i++){
        swap(*p , *j);
        p=p+1;
        j=j-1;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int v[10];
    int v2[10];

    geravet(v, v2);

    for(int i=0; i<10; i++){
        cout<<v[i]<<" - ";
    }
    cout<<endl;

    for(int i=0; i<10; i++){
        cout<<v2[i]<<" - ";
    }

    troca(v, v2);

    cout<<endl<<endl;

    for(int i=0; i<10; i++){
        cout<<v[i]<<" - ";
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        cout<<v2[i]<<" - ";
    }
}