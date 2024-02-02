// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={1,2,3,34,55, 1,43, 2, 3};
//     set<int> s;
//     for(auto ele : v){
//         s.insert(ele);
//     }
//     for(auto ele :s){
//         cout<<ele<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<string>s;
//     int n;
//     cin >> n;
//     string name;
//     while(n--){
//         cin >> name;
//         s.insert(name);
//     }
//     for(auto ele:s){
//         cout<<ele<<" ";
//     }
//    return 0;
// }
#include<iostream>
#include<set>
#include<vector>
using namespace std;
// int commonElement(vector<int>v1, vector<int>v2){
//     int ans = 0;
//     for(int i = 0; i<v1.size(); i++){
//         for(int j = 0; j<v2.size(); j++){
//             if(v1[i]==v2[j]){
//                 ans  = v1[i]+v2[j];
//             }
//         }
//     }
//     return ans;
// }
int main()
{
    vector<int> v1 = {1,1,2,3,3,3};
    vector<int> v2 ={5,6,7,5,2,3,6};
    set<int> v3;
    int ans = 0;
    for(int i = 0; i<v1.size(); i++){
        for(int j = 0; j<v2.size(); j++){
            if(v1[i] ==v2[j]){
                v3.insert(v1[i]);
            }
        }
    }
    int sum = 0;
    for(auto ele : v3){
        sum = sum+ele;
    }
    cout<<sum;
    // cout<<commonElement(v1, v2);
   return 0;
}