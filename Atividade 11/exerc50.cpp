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

void geravet(int *vet1, int *vet2){
    for(int i=0; i<5; i++){
        *(vet1+i)=rand()%20;
        *(vet2+i)=rand()%20;
    }
    int i, j, t;

    // Sort the numbers using pointers
    for (i = 0; i < 5; i++) {

        for (j = i + 1; j < 5; j++) {

            if (*(vet1 + j) < *(vet1 + i)) {

                t = *(vet1 + i);
                *(vet1 + i) = *(vet1 + j);
                *(vet1 + j) = t;
            }
        }
    }

    i=0;
    j=0;

    // Sort the numbers using pointers
    for (i = 0; i < 5; i++) {

        for (j = i + 1; j < 5; j++) {

            if (*(vet2 + j) < *(vet2 + i)) {

                t = *(vet2 + i);
                *(vet2 + i) = *(vet2 + j);
                *(vet2 + j) = t;
            }
        }
    }
}

void vetnov(int *vet1, int *vet2){
    int *c=new int (0);
    int *v3=new int [10];

    for(int i=0; i<10; i++){
        *(v3+i)=*(vet1+*c);
        i++;
        *(v3+i)=*(vet2+*c);
        (*c)++;
    }
    int i, j, t;
    for (i = 0; i < 10; i++) {

        for (j = i + 1; j < 10; j++) {

            if (*(v3 + j) < *(v3 + i)) {

                t = *(v3 + i);
                *(v3 + i) = *(v3 + j);
                *(v3 + j) = t;
            }
        }
    }

    for(int i=0; i<10; i++){
        cout<<*(v3+i)<<" - ";
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *vet1=new int[5];
    int *vet2=new int[5];

    geravet(vet1, vet2);
    vetnov(vet1, vet2);
}
