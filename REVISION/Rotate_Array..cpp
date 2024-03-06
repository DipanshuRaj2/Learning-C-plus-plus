// #include <bits/stdc++.h>
// using namespace std;
// // class Solution {
// // public:
// //     void aray(vector<int>& nums, int k) {
// //         k = k % nums.size();
// //         vector<int>ans;
// //         for(int i = k; i<nums.size(); i++){
// //             ans.push_back(nums[i]);
// //             cout<<ans[i]<<" ";
// //         }
// //         cout<<endl<<endl;
// //         for(int i =0; i<k; i++){
// //             ans.push_back(nums[i]);
// //             cout<<ans[i]<<" ";
// //         }

// //     }
// // };
// int main()
// {
//     // Solution sol;
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;

//     k = k % nums.size();
//     vector<int> ans;
//     for (int i = k; i < nums.size(); i++)
//     {
//         ans.push_back(nums[i]);
//         cout << ans.back() << " ";
//     }
//     cout << endl
//          << endl;
//     for (int i = 0; i < k; i++)
//     {
//         ans.push_back(nums[i]);
//         cout << ans.back() << " ";
//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
vector<int>array_(vector<int>ans){
    int start = 0;
    int end = ans.size()-1;
    while(start<=end){
        swap(ans[start], ans[end]);
        start++;
        end--;
    }
    return ans;
}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    vector<int> ans= array_(arr);
    for(int i = 0; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }
   return 0;
}