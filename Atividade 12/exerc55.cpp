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

void amor(int *n){
    cout<<endl;
    int *c=new int(*n);
    int *d=new int (1);
    for(int *i=new int (0); *d<*n; *i+=1){
        for(int *j=new int(0); *j<*c; *j+=1){
            cout<<" ";
        }

        cout<<" ";
        for(int *j=new int(0); *j<*d; *j+=1){
            cout<<*n<<" ";

        }
        *d+=1;
        *c-=1;
        cout<<endl;
    }

    for(int *i=new int (0); *d>0; *i+=1){
        for(int *j=new int(0); *j<*c; *j+=1){
            cout<<" ";
        }

        cout<<" ";
        for(int *j=new int(0); *j<*d; *j+=1){
            cout<<*n<<" ";

        }
        *d-=1;
        *c+=1;
        cout<<endl;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *n=new int;
    cout<<"Informe essa bosta de número: ";
    cin>>*n;

    do{
    if(*n>20 || *n<3){
        cout<<endl<<"Informe um valor válido, canalha"<<endl;
        cout<<"Informe essa bosta de número: ";
        cin>>*n;
    }
    else{
        amor(n);
    }
    }while(*n>20 || *n<3);

}
