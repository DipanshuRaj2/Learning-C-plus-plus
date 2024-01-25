/*
Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order.Merge the two arrays into a single sorted array of size m+n.

input: arr1 =[1,2,3], arr2 = [4,5,6]
Output: arr = [1,2,3,4,5,6]

input: arr1 =[1,3,5], arr2=[2,4,6]
Output:  arr = [1,2,3,4,5,6]

*/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
void sortTwoVector(vector<int>v1,vector<int>v2){
    set<int>ans;
    int n = v1.size()+v2.size();
    for(auto ele : v1){
        ans.insert(ele);
    }
    for(auto ele : v2){
        ans.insert(ele);
    }
    for(auto ele :ans){
        cout<<ele<<" ";
    }
}
int main()
{
    // vector<int>v1 = {1,2,3};
    // vector<int>v2 ={4,5,6,2};
    // sortTwoVector(v1 , v2);
    cout<<"Hello world0";
   return 0;
}
