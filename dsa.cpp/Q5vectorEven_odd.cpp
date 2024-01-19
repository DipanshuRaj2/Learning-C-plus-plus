//find the difference between the sum of elements at even indices to the sum of elements at odd indices
/*

Explanation: 
Considering the subsequences { 3, 1, 5, 1, 9 } from the array 
Sum of even-indexed array elements = 3 + 5 + 9 = 17 
Sum of odd-indexed array elements = is 1 + 1 = 2 
Therefore, the difference between the sum of even and odd-indexed elements present in the subsequence = (17 – 2) = 15, which is the maximum possible.

Input: arr[] = {1, 2, 3, 4, 5, 6}
Output: 6
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={3, 1, 5, 1, 9 };
    int ans = 0;
    for(int i = 0; i<v.size(); i++){
        if(i%2==0){
            // cout <<v[i]<<" ";
            ans  = ans+v[i];
        }
        // cout << endl;
        else if(i%2==1){
            // cout << v[i]<<" ";
            ans = ans - v[i];
        }
    }
    cout <<endl;
    cout <<"ans: "<<ans<<" ";

    return 0;
}