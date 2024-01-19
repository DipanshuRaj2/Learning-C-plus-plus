// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v ={1, 2, 3, 3,3, 2, 4, 1};;
    
//     for(int i = 0; i<v.size(); i++){
//         for(int j = i+1; j<v.size(); j++){
//             if(v[i]==v[j]){
//                 v[i] = v[j] = -1;
//             }
//         }
//     }
//     int unique = 0;
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] > 0){
//             unique = v[i];
//         }
//     }
//     cout << unique;
    
//     return 0;
// }


// time complexity O(n logn)
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={1, 2, 4, 3, 4, 6, 2, 1, 3};

    sort(v.begin(), v.end());

    cout << endl;

    int unique = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i] != v[i+1]){
            unique = v[i];
        }
    }
    cout << unique ;
     return 0;
}