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

int soma(int v1, int v2, int somatorio){

    if(v1>v2){
        return somatorio;
    }
    else{
        return (v1+soma(v1+1,v2, somatorio));
    }

}


main()
{
setlocale(LC_ALL, "Portuguese");

    int v1, v2;
    cout<<" INFORME DOIS VALORES: ";
    cin>>v1;
    cout<<endl<<"INFORME O SEGUNDO NÚMERO: ";
    cin>>v2;

    int somatorio=0;
    cout<<soma(v1,v2, somatorio);
}
