// #include<iostream>
// #include<math.h>
// using namespace std;
// int decimalToBinary(int &n){
//     int ans = 0;
//     int i = 0;
//     while(n != 0){
//         int digit = n & 1;
//         ans = (digit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin >> n;
//     cout<<decimalToBinary(n);
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
vector<int>convertDecimalToBinary(int n){
    vector<int>v ;
    while(n != 0){
        int ans = n & 1;
        v.push_back(ans);
        n = n/2;
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    int n = 8;
    vector<int> v;
    v = convertDecimalToBinary(n);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i];
    }
   return 0;
}