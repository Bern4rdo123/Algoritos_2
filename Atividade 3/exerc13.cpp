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

linha(int l){
    for(int j=1; j<=l; j++){
        cout<<l*j<<"\t";
    }
    cout<<endl;

}

main()
{
setlocale(LC_ALL, "Portuguese");
int q;
do{
    cout<<" INFORME O INTERVALO NECESSÁRIO: ";
    cin>>q;
}while(q>9 || q<1);
for(int i=1; i<=q; i++){
    linha(i);
}
}
