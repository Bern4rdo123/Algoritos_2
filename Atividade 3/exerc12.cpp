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
int calcula(){
int n1;
cin>>n1;

cout<<endl;
cout<<"informe o segundo valor: ";
int n2;
cin>>n2;

cout<<endl;
cout<<"informe o valor que deseja dividí-los: ";
int div;
cin>>div;

int maior=0;
int menor;

if(n1>maior){
    maior=n1;
    menor=n2;
}
if(n2>maior){
    maior=n2;
    menor=n1;
}
int soma=0;

for(int i=menor+1; i<maior; i++){
    if(i%div==0){
        soma+=i;
    }
}
cout<<" está é a soma dos divisíveis por "<<div<<" entre "<<menor<<" e "<<maior<<": "<<soma;

}

main()
{
setlocale(LC_ALL, "Portuguese");
cout<<" INFORME UM VALOR: ";
calcula();
}
