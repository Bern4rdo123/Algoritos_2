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

void cadsaco(int &saco, float &porc){
    system("cls");
    cout<<"Informe a quantidade de quilos do saco de ração: ";
    cin>>saco;

    cout<<endl<<"Informe a quantidade de ração fornecida aos gatos em gramas: ";
    cin>>porc;
    return;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int saco;
    float porc;

    cadsaco(saco, porc);

    int *p=&saco;
    float *i=&porc;

    *p=*p*1000;

    for(int j=0; j<5; j++){
        *p-=*i*2;
    }
    cout.precision(2);
    cout<<endl<<"A quantidade de ração sobrando dentro do pote é de: "<<*p/1000;
}