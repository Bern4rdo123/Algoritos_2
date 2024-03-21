#include <iostream>
#include<cstdio>
#include<cstdlib>
#include <cmath>
using namespace std;
int v, c, x;
int main() {
    v = -3;
    x = 0;
    c = 1;
    x = c * fabs(v);
    c = sqrt(6);
    cout << "\n" << c << endl;
    do {
        v += pow(c, x);
        cout<<v<<endl;
        c++;
    } while (c <= 4);
    cout << v << endl;
    cout << x << endl;
    cout << c;
    getchar();
}