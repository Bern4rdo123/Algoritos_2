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

using namespace std;

main()
{
setlocale(LC_ALL, "Portuguese");

    bool achou=false;
    string alfabt ("a" "b" "c" "d" "e" "f" "g" "h" "i" "j" "k" "l" "m" "n" "o" "p" "q" "r" "s" "t" "u" "v" "w" "x" "y" "z");
    cout<<alfabt[0];

    string teste;
    cout<<"informe a frase para ver se ela é um pangrama: ";
    getline(cin, teste);


    for(int i=0; i<=teste.size();i++){
        teste[i]=tolower(teste[i]);
    }

    for(int i=0; i<=alfabt.size();i++){
        for(int j=0; j<=teste.size();j++){

        if(teste[j]==alfabt[i]){
            //cout<<"achou"<<endl;
            break;
        }

        if(j==teste.size()){
            cout<<" a frase não é angrama";
            return 0;

        }
        }
    }

    cout<<" a frase é pangrama !";


}
