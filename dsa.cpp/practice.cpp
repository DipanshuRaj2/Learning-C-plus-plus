// #include<iostream>
// using namespace std;
// int linearSearch(int arr[], int n, int ele){
//     int ans = -1;
//     for(int i = 0; i<n; i++){
//         if(arr[i] == ele)
//             ans = i;
//             break;
//     }
//     return ans;

// }
// int main(){
//     int arr[] = {3, 9, 18, 11, 7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int ele = 12;
//     cout<<linearSearch(arr, n , ele);
//     return 0;
// }

//find the last occurence 
// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int countGreater(vector<int>v , int ele){
//     int n = v.size();
//     int ans = -1;
//     int count = 0;
//     for(int i = n-1; i>=0; i--){
//         if(v[i] > ele){
//             ans = v[i];
//             count++;
//         }

//     }
//     return count;
// }

// int main(){
//     vector<int>n = {1,2,3,2,1,3,1};
//     int ele = 2;
//     cout<<countGreater(n, ele); 
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool sortedArray(vector<int>v){
//     bool ans = true;
//     int n = v.size();
//     for(int i = 1; i<n; i++){
//         if(v[i]<v[i-1]){
//             ans = false;
//             break;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int>v ={12,100,34, 45, 50, 56};
//     cout<<sortedArray(v);
//    return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int sumOfEvenOddIndices(vector<int>&v){
    int n = v.size();
    int sum1 = 0;
    int sum2 = 0;
    for(int i =0; i<n;i++){
        if(i % 2== 1){
            sum1+=v[i];
        }
        else{
            sum2+=v[i];
        }
    }
    return sum1-sum2;
}

int main(){
    vector<int>v ={3,5,4,2,1};
    cout<<sumOfEvenOddIndices(v);
    return 0;
}