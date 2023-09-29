#include<iostream>
using namespace std;
int main(){

    int *p1;

    cout <<"Sizeof int = "<<sizeof p1 <<"."<<endl;
    double *p2;
    cout <<"Sizeof double = "<<sizeof p2 <<"."<<endl;
    float *p3;
    cout <<"Sizeof float = "<<sizeof p3 <<"."<<endl;
    long long *p4;
    cout <<"Sizeof long long = "<<sizeof p4 <<"."<<endl;
    string  *p5;
    cout <<"Sizeof string = "<<sizeof p5 <<"."<<endl;

    int *p5;
    int &a = p5 ;

    cout <<"Sizeof a = "<<sizeof p5 <<"."<<endl;
    return 0;
}