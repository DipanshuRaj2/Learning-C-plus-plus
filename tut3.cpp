#include<iostream>
using namespace std;
int main()
{
    int a ,b;
    cout<<"enter the value of a \n" ,a;
    cin >>a;
    cout<<"enter the value of b\n", b;
    cin>>b;
    cout<<"a+b =" <<a+b<<endl;
    cout<<"a-b =" <<a-b<<endl;
    cout<<"a*b =" <<a*b<<endl;
    cout<<"a/b =" <<a/b<<endl;
    cout<<"a%b =" <<a%b<<endl;
    cout<<"a++" <<a++<<endl;
    cout<<"a--" <<a--<<endl;
    cout<<"++a" <<a--<<endl;
    cout<<endl;


    cout<<"the value of a==b is "<<(a==b) <<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    
    // logical opertor
    // logical and (&&)
    cout<<"the value of a==b && (a<b) "<<((a==b) && (a<b))<<endl;
    cout<<"the value of a==b || (a<b) "<<((a==b) || (a<b))<<endl;
   }

