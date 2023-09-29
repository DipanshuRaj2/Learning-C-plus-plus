#include<iostream>
using namespace std;
int main(){
    int i = 10;

    int *p = &i;

    cout << p << endl;
    p = p + 1;

    cout << p << endl;

    p = p + 2;
    cout << p<<endl;

    cout <<sizeof p <<endl;

    p = p - 2;
    cout << p << endl;

    double d = 102.3;
    double *dp = &d;
    cout << dp << endl;
    dp++;
    cout << dp << endl;

    cout <<sizeof dp <<endl;

    return 0;
} 