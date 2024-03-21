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

int fibonacci(int cont, int n1, int n2){
        if(cont==20){
            return 0;
        }
        else{
            n2=n1+n2;
            cout<<n2<<"   ";
            fibonacci(cont+1, n2-n1, n2);
        }
}

main()
{
setlocale(LC_ALL, "Portuguese");
    int cont=0;
    int n1=1;
    int n2=1;
    fibonacci(cont, n1, n2);

}
