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

void gera(int *n){
    int *p=new int(1);
    for(int i=0; i<*n; i++){
        for(int j=0; j<*p; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
        *p+=1;
    }
    *p=*n+1;
    for(int i=0; i<*n; i++){
        for(int j=0; j<*p-2; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
        *p-=1;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *n=new int;

    cout<<"Informe o número: ";
    cin>>*n;

    gera(n);
}