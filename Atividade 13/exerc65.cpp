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

void funcoes(){
    int mai=0;
    int men;
    int soma=0;
    int cont=0;
    int pares=0;
    int impares=0;

    ifstream le;
    le.open("arquivo3.txt", ios::in);

    char t[15];

    le.getline(t, 10);
    men=atoi(t);

    while(!le.fail()){
        soma+=atoi(t);
        cont++;

        if(atoi(t)>mai){
            mai=atoi(t);
        }
        if(atoi(t)<men){
            men=atoi(t);
        }

        if(atoi(t)%2==0){
            pares++;
        }
        else{
            impares++;
        }
        le.getline(t, 15);
    }

    cout<<"Maior: "<<mai;
    cout<<endl<<"Menor: "<<men;
    cout<<endl<<"Média de valores: "<<(float)soma/cont;
    cout<<endl<<"Ímpares: "<<impares;
    cout<<endl<<"Pares: "<<pares;

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    ofstream esc;
    esc.open("arquivo3.txt", ios::app);

    cout<<"Informe um número: ";
    int v;
    cin>>v;

    esc<<v<<"\n";

    bool bol;
    do{
        cout<<endl<<"Deseja informar outro número? 1-sim / 0-não: ";
        cin>>bol;

        if(bol==1){
            cout<<endl<<"Informe o novo valor: ";
            cin>>v;
            esc<<v<<"\n";
        }
    }while(bol!=0);
    esc.close();

    funcoes();
}