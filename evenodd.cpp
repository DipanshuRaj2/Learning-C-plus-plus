#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a=0;
   int b=1;
//    cout<<a<<" "<<b<<" ";
   for(int i=0; i<=n; i++){

    int fibnumber =a+b;
    
    cout<<fibnumber<<" ";
    a=b;
    b=fibnumber;

   }
  
    
     
       
    }
    
