#include<iostream>
using namespace std;
int main(){
    int i = 10;
    
    cout << &i << endl; // print the address of i;

    int * p = &i; // pointer ka naam ka variable usme address of i ka store hain

    cout << * p << endl; // output 10;
}