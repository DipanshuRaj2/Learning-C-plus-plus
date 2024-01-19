//Check If we can partition tha array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int>&v){
    int total_sum = 0;
    for(int i = 0; i<v.size(); i++){
        total_sum = total_sum+v[i];
    }
    int prefixSum = 0;
    for(int i = 0; i<v.size(); i++){
        prefixSum = prefixSum+v[i];

        int suffixSum = total_sum - prefixSum;

        if(suffixSum == prefixSum){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin >> n;
    vector<int>v;
    cout<<"Enter the Element: ";
    for(int i = 0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    if(checkPrefixSuffixSum(v)){
        cout<<"PrefixSuffixSum Found";
    }
    else {
        cout<<"Not found";
    }
    return 0;

}