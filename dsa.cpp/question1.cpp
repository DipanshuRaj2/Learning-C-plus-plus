// #include<iostream>
// using namespace std;
// int main()
// {
//    int i , a;
//    char c;
//    cin>>a;
//    if(0< a && a <=20)
//    {
//     cout<<"array in size"<<endl;
//     int ar[a];
//    for(int i=0; i < a; i++)
//    {
//         cin>>ar[i];
//     }
   
//    cout<<"elements: "<<endl;
//    for(int i=0; i < a ; i++)
//    {
//     cout<<ar[i]<<endl;
//    }
   
// }
//    else
//    {
//     cout<<"invalid array in size"<<endl;
//    }
//     return 0;

// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
 
 int c=0;
 int n;
 int a;
 cin>>n;
 if(n>0 && n<=20)
 {
 char arr[n];
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 a=arr[i];
 if(a>=97 && a<=122)
 c=c+1;
 }
 if (c==0)
 cout<<-1;
 else
 cout<<c;
 }
 else
 {
 cout<<"Invalid array size";
 }
 return 0;
}