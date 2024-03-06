#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int ans = 1;
    for(int i = n; i>0; i--){
        ans = ans * i;
    }
    return ans;
}
int nCr(int n, int r ){
   int num=  factorial(n);
   int deno = factorial(n)-factorial(r);

return num/deno*fac    
    
}
int main()
{
    int n = 5;
    int r = 2;
    cout<<factorial(n);
   return 0;
}