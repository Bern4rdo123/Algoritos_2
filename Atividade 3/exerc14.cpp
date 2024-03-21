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
int mat[5][5];

void caso5(int i){
    system("cls");
    int foi;
    foi=0;
    for(int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<5; coluna++){
            if(linha==coluna && mat[linha][coluna]==0){
                mat[linha][coluna]=i;
                foi=1;
                break;
            }
            if(foi==1){
                break;
            }
        }
    }
    if(foi==0){
        cout<<" DIAGONAL PRINCIPAL CHEIA !";
        getchar();
    }
    cout<<endl;

    for(int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<5; coluna++){
            cout<<mat[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}

void caso11(int i){
     system("cls");
    int foi;
    foi=0;
    for(int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<5; coluna++){
            if(linha<coluna && mat[linha][coluna]==0){
                mat[linha][coluna]=i;
                foi=1;
                break;
            }
            if(foi==1){
                break;
            }
        }
    }
    if(foi==0){
        cout<<" DIAGONAL PRINCIPAL CHEIA !";
        getchar();
    }
    cout<<endl;

    for(int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<5; coluna++){
            cout<<mat[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}


void caso13(int i){
     system("cls");
    int foi;
    foi=0;
    for(int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<5; coluna++){
            if(linha>coluna && mat[linha][coluna]==0){
                mat[linha][coluna]=i;
                foi=1;
                break;
            }

        }
        if(foi==1){
                break;
            }
    }
    if(foi==0){
        cout<<" DIAGONAL PRINCIPAL CHEIA !";
        getchar();
    }
    cout<<endl;

    for(int linha=0; linha<5; linha++){
        for(int coluna=0; coluna<5; coluna++){
            cout<<mat[linha][coluna]<<"\t";
        }
        cout<<endl;
    }
}



main()
{
setlocale(LC_ALL, "Portuguese");

for(int linha=0; linha<5; linha++){
    for(int coluna=0; coluna<5;coluna++){
        mat[linha][coluna]=0;
    }
}

    int num;

    do{
    cout<<" INFORME UM NÚMERO ";

    cin>>num;
    if(num<0){
        continue;
    }

if(num%5==0){
    caso5(num);
}
else if(num%11==0){
    caso11(num);
}
else if(num%13==0){
    caso13(num);
}

    }while(num!=0);


}
