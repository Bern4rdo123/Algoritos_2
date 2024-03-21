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
#include<string>
#include<string.h>

using namespace std;

main()
{
setlocale(LC_ALL, "Portuguese");

bool foi=false;
cout<<" INSIRA UM EMAIL VÁLIDO: ";
string email;
 string endereco;

getline(cin,email);


    if(isdigit(email[0])){
        cout<<"email inválidado !";
    }
    int detecta;
    int v=0;
    for(int i=0; i<=email.size(); i++){
        if(email[i]=='@'){
            detecta=i;
            cout<<" o arroba foi encontrado na posição "<<i;
            for(int j=detecta; j<=email.size();j++){
                endereco[v]=email[j];
                v++;
                cout<<endl<<j;
            }
        }
    }

    cout<<endl<<detecta;

    string enderecocerto ("@gmail.com");

    if(endereco==enderecocerto){
        cout<<" O endereço de email está incorreto";
    }

    for(int i=0; i<=10; i++){
        cout<<endereco[i];
    }

    for(int i=0; i<endereco.size(); i++){
        if(endereco[i]==enderecocerto[i+detecta]){
            continue;
        }
        else{
            cout<<" não estão iguais";
        }
    }
    cout<<endl<<enderecocerto;

}
