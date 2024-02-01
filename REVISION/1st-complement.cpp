#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>firstComplement(int n){
    vector<int>v;
    while(n!=0){
        int ans = n & 1;
        v.push_back(ans);
        n = n/2;
    }
    reverse(v.begin(), v.end());
   for(int i = 0; i<v.size(); i++){
        if(v[i]==0){
            v[i] = 1;
        }
        else{
            v[i] = 0;
        }
   }
    int carry = 1;
    for(int i = v.size()-1; i>=0; i--){
        int val = v[i];
        val = val +carry;
        if(val == 1){
            carry = 0;
            v[i] = 1;
        }
        else if(val == 2){
            carry = 1;
            v[i] = 0;
        }
    }
    return v;
}
int main()
{


    int n ;
    cin >> n;

    vector<int>v= firstComplement(n);

    for(auto ele:v){
        cout<<ele;
    }
   return 0;
}



// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
    
//     vector<int>v={0,1,1,1,0};
//     int carry = 1;
//     for(int i = v.size()-1; i>=0; i--){
//         int val = v[i];
//         val = val +carry;
//         if(val == 1){
//             carry = 0;
//             v[i] = 1;
//         }
//         else if(val == 2){
//             carry = 1;
//             v[i] = 0;
//         }
//     }
//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i];
//     }
//    return 0;
// }