// #include<bits/stdc++.h>
// using namespace std;
// bool checkTwoSum(vector<int>arr, int target){
//     int n = arr.size();
//     unordered_map<int, int>mpp;
//     for(int i = 0; i<n; i++){
//         int num = arr[i];
//         int moreNeeded = target - num;
//         if(mpp.find(moreNeeded)!=mpp.end()){
//             return true;
//         }
//         mpp[num] = i;
//     }
//     return false;
// }
// int main()
// {
//     int target = 90;
//     vector<int>arr ={4,1, 2, 3, 1};
//     cout<<checkTwoSum(arr, target);
    
//    return 0;
// }

//maxium subarray
#include<bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector<int>v, int target){
    int maxi = INT_MIN;
    for(int i = 0; i<v.size(); i++){
        int sum = 0;
        sum += v[i];
        if(sum < 0){
            sum = 0;
        }
        maxi = max(sum, maxi);
    }
    return maxi;
}
int main()
{
    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
    int ans = 7;
    cout<<maximumSubarraySum(arr, ans);
   return 0;
}