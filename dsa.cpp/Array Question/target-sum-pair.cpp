//Target sum
/*Find the total number  of pairs in the Array whose sum is equal to the given value of X.
arr ={3,4,6,7,1} 
targetSum = 7
ans = 2;
*/
#include<iostream>
#include<vector>
using namespace std;
int targetSum(vector<int>v,int sumTarget){ 
    int pairs = 0;
    for(int i = 0; i<v.size(); i++){
        for(int j = i+1; j<v.size(); j++){
            if(v[i] +v[j] == sumTarget){
                pairs++;
            }
        }
    }
    return pairs;
}
int main(){
    
    vector<int>v={3,4,6,7,1};
    int sumTarget= 0;
    cout<<"Pairs of targetSum: " << targetSum(v ,sumTarget);
}