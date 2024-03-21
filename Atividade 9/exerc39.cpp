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

void desenha(int *p){
    int *l;
    int g=1;
    l=&g;
    for(int i=0; i<*p; i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=0; i<*p-2; i++){
        cout<<"* ";
        for(int j=1; j<=*p-2; j++){
            if(*l==j || j==(*p-1)-*l){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        *l=*l+1;
        cout<<"* ";
        cout<<endl;
    }

    for(int i=0; i<*p; i++){
        cout<<"* ";
    }
    cout<<endl<<endl;
    system("pause");
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tal;
    int *p=&tal;
    cout<<"Informe o tamanho do desenho: ";
    cin>>*p;

    desenha(p);
}