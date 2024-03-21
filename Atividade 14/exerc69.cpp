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
#include<fstream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat[8][8];
    ofstream esc;
    esc.open("exer_69.txt", ios::out);

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            mat[i][j]=rand()%50;
            esc<<mat[i][j]<<"-";
        }
    }
    esc.close();

    ifstream le;
    char t[10];
    le.open("exer_69.txt",ios::in);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            le.getline(t,10,'-');
            cout<<t<<" ";
        }
        cout<<endl;
    }
    le.close();

    cout<<"Elementos principal: ";
    le.open("exer_69.txt",ios::in);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            le.getline(t,10,'-');
            if(j==i){
                cout<<t<<" ";
            }
        }
    }
    le.close();
    le.open("exer_69.txt",ios::in);

    cout<<endl<<"Elementos secundária: ";

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            le.getline(t,10,'-');
            if(j+i==8-1){
                cout<<t<<" ";
            }
        }
    }
    le.close();

    le.open("exer_69.txt",ios::in);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            le.getline(t,10,'-');
            if(j==i){
                cout<<t<<" ";
            }
        }
    }

    cout<<endl<<"Elementos abaixo da diagonal principal: ";
    le.close();
    le.open("exer_69.txt",ios::in);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            le.getline(t,10,'-');
            if(i>j){
                cout<<t<<" ";
            }
        }
    }
    le.close();

    cout<<"Elementos acima da diagonal principal: ";
    le.open("exer_69.txt",ios::in);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            le.getline(t,10,'-');
            if(i<j){
                cout<<t<<" ";
            }
        }
    }
}
