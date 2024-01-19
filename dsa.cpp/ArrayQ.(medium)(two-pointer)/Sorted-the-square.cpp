//Given an Integer array 'a' sorted in non-decreasing order, return an array of each number sorted in non-decreasing order.
// ex = 1 {-10, -8, -3, 4, 5, 6};
// o/p ={9, 16, 25, 36, 64, 100,};













// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {   
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i = 0; i<n; i++){
//         int ele;
//          cin>>ele;
//         v.push_back(ele);
//     }
//     vector<int>v1(n);
//     for(int i = 0; i<n; i++){
//         v1[i]=v[i]*v[i];
       
//     }
//     sort(v1.begin(),v1.end());
//     for(int i = 0; i<n; i++){
//         cout<< v1[i]<<" ";
//     }
//    return 0;
// }


//another approach
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void sortTheSquareArray(vector<int>&v){
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    vector<int>ans;
    while(left_ptr<=right_ptr){

        if(abs(v[left_ptr]) < abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }

        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i = 0; i<v.size(); i++){
        cout << ans[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    sortTheSquareArray(v);
    
    return 0;
}