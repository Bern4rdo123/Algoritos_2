#include<iostream>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
   setlocale(LC_ALL, "Portuguese");

   float v[20];

   for(int i=0; i<20; i++){
    v[i]=rand()% 100 * 1.12423;
   }
   cout.precision(5);
    int t=0;
   for(int i=0; i<20; i++){
    cout.width(6);
    cout.fill(' ');
    cout<<v[i]<<", ";
    if(t==4 && i!=0){
        cout<<endl;
        t=0;
        continue;
    }
    t++;
   }

   cout<<endl<<" AGORA COM UM CEIL: ";

   for(int i=0; i<20; i++){
    cout.width(6);
    cout.fill(' ');

    cout<<ceil(v[i]);
    cout<<", ";
   }
   cout<<endl;

    cout<<endl<<"AGORA COM UM FLOOR";
   for(int i=0; i<20; i++){
    cout.width(6);
    cout.fill(' ');

    cout<<floor(v[i]);
    cout<<", ";
   }

   cout<<endl<<" AGORA ARREDONDANDO UM NÚMERO EM CASA DECIMAL: "<<endl;

   for(int i=0; i<20; i++){
    cout.width(6);
    cout.fill(' ');
    cout.precision(4);
    cout<<round(v[i])<<", ";
    if(t==4 && i!=0){
        cout<<endl;
        t=0;
        continue;
    }
    t++;
   }
}