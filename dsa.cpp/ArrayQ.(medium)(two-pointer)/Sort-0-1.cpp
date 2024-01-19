// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;

// void sorting0_1(vector<int> &v){
//     int count = 0;

//     for(int i = 0; i<v.size(); i++){
//         if(v[i] ==0){
//             count++;
//         }
//     }
//     // cout << count<<endl;
//     for(int i = 0; i<v.size();i++){
//         if(i < count){
//             v[i] = 0;
//         }
//         else{
//             v[i] = 1;
//         }
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int>v;
//     for(int i =0; i<n; i++){
//         int element; 
//         cin >> element;
//         v.push_back(element);
//     }
//     sorting0_1(v);
//     for(int i = 0; i<n; i++){
//         cout << v[i]<<" ";
//     }
    
// }
// another approach of sort the array of 0 and 1;
#include<iostream>
#include<vector>
using namespace std;
void sort_0_1(vector<int>&v){
    int left_ptr = 0;
    int right_ptr =v.size()-1;

    while(left_ptr<right_ptr){

        if(v[left_ptr] == 1 && v[right_ptr] == 0){
            v[left_ptr++] = 0;
            v[right_ptr--] =1;
        }
        if(v[left_ptr]==0){
            left_ptr ++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
}
int main()
{
    vector<int>v;
    int n; 
    cin >> n;

    for(int i = 0;i<n; i++){
        int element; cin>>element;
        v.push_back(element);
    }

    sort_0_1(v);

    for(int i = 0; i<n; i++){
        cout<< v[i]<<" ";
    }

   return 0;
}