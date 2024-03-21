#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<ctime>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<string>
#include<string.h>

using namespace std;

 int main()
{
setlocale(LC_ALL, "Portuguese");

    string porigi;
    string ptroca;

    cout<<" INFORME A PALAVRA 1 ";
    getline(cin, porigi);

    cout<<" INFORME A PALAVRA QUE DESEJA COMPARAR ";
    getline(cin, ptroca);

    for(int i=0; i<=porigi.size();i++){
        porigi[i]=tolower(porigi[i]);
    }
    for(int i=0; i<=ptroca.size();i++){
        ptroca[i]=tolower(ptroca[i]);
    }

    for(int i=0; i<=porigi.size();i++){
        for(int v=0; v<=ptroca.size();v++){
            if(porigi[i]==ptroca[v]){
                break;
            }
            if(v==ptroca.size()){
                cout<<" não são anagramas";
                return 0;
            }
        }
    }
    cout<<" são anagramas da mesma palavra !";
}
