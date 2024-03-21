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

void pegas(string *s1, string *s2){
    cout<<"Informe a primeira string: ";
    getline(cin,*s1);
    cout<<endl<<"Informe a segunda string: ";
    getline(cin, *s2);

    cout<<"Concatenando as duas strings:";
    cout<<endl;

    basic_string<char, char_traits<char>, allocator<char>> s3;
    s3 = *s1 + *s2;

    cout<<s3;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    string *s1=new string;
    string *s2=new string;

    pegas(s1,s2);
}