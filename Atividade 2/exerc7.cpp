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

main()
{
setlocale(LC_ALL, "Portuguese");

    string str;

    cout<<" INFORME A STRING: ";
    getline(cin, str);

    string str2(str);

    for(int i=0; i<=(str2.size()/2)-1;i++){
        swap(str2[str2.size()-i-1],str2[i]);

    }
        if(str==str2){
            cout<<"AS STRINGS S�O IGUAIS, � PALINDROMO";
        }
        else{
            cout<<" N�o � pal�ndromo";
        }

}
