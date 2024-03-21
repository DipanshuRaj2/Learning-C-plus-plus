/*
combination ncr = n!/r!(n-r)!

*/
// #include<bits/stdc++.h>
// using namespace std;
// long factorial(int n){
//     long fact = 1;
//     for(int i = n; i > 0; i--){
//         fact = fact*i;
//     }
//     return fact;
// }

// int nCr(int n , int r){
//     int num = factorial(n);
//     int deno = factorial(n-r)*factorial(r);
//     return num /deno;
// }
// int main()
// { 
//     int n = 6 ,r = 3;
//     cout<<nCr(n, r);

//    return 0;
// }

//taking more time complexity

//another way

#include<bits/stdc++.h>
using namespace std;
int nCr(int n, int r){
    long res = 1;
    for(int i = 0; i<r; i++){
        res = res * (n - i);
        res = res /(i+1);
    }
    return res;
    
}
int pascalTriangle(int n , int r) {
        int element = nCr(n - 1, r-1);
        return element;
}
int main()
{
    int n = 5, r = 3;
    cout<< pascalTriangle(n , r);
   return 0;
}