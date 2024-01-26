#include<iostream>
#include<sstream>
using namespace std;

int main(){
    stringstream ss;

    ss << "Hello, ";
    ss << 42;
    ss <<" world";

    string result = ss.str();

    cout << result<< endl;
}
