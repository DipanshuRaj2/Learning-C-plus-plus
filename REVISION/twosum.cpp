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
int maximumSubarraySum(vector<int>v){
    int maxi = INT_MIN;
    int sum = 0;

    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;
    for(int i = 0; i<v.size(); i++){
        if (sum == 0)
        {
            start = i;
        }
        sum += v[i];
        if(sum < 0){
            sum = 0;
        }
        if(maxi < sum){
           maxi = sum;
            ansStart = start;
            ansEnd = i;
        } 
    }

    for(int i = ansStart; i<=ansEnd; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return maxi;
}
int main()
{
    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
    
    cout<<maximumSubarraySum(arr);
    
   return 0;
}