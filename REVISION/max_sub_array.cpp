#include<bits/stdc++.h>
using namespace std;
vector<int> maxSubArray(vector<int>v){
    int sum = 0;
    int subArray= v[0];
    vector<int>ans;
    for(int i = 0; i<v.size(); i++){
        sum = sum+ v[i];
        subArray = max(subArray, sum);
        
        if(sum <= 0){
            sum = 0;
        }
    }
    return subArray;
}
int main()
{
    vector<int>v ={5,20,-30,60,-15,20};
    cout<<maxSubArray(v);
   return 0;
}