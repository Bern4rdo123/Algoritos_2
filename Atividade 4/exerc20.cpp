#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

int calcula(int n1, int n2){

    if(n2==0){
        return n1;
    }
    else{
        return calcula(n2, n1%n2);
    }
 }

int main()
{
setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    cout<<" INFORME O PRIMEIRO VALOR: ";
    cin>>n1;
    cout<<endl;

    cout<<" INFORME O SEGUNDO VALOR: ";
    cin>>n2;

    cout<<
    calcula(n1, n2);



}
