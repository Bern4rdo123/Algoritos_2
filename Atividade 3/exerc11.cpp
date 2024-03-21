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

int calcula(int n1, int n2){

    int menor;
    int maior=0;
    if(n2>maior){
    maior=n2;
    menor=n1;
    }
    if(n1>maior){
    maior=n1;
    menor=n2;
    }

    int soma=0;

    for(int i=menor+1; i<maior; i++){
        soma+=i;
    }

    return soma;

};

    main()
{
setlocale(LC_ALL, "Portuguese");
cout<<" INFORME O PRIMEIRO VALOR:";
int t;
cin>>t;
cout<<endl;
cout<<"informe o segundo valor: ";
int i;
cin>>i;

cout<<" a soma dos números entre "<<i<< " e "<<t<<" foi de: "<<calcula(i,t);
}
