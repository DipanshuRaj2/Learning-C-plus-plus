//Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given  range of indices from l to r(both included).
//Note: The values of l and r in queries follow 1-based indexing.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={4,5,6,2,1,3};
    int l , r;
    cout<<"Enter the index form l and r :"<<endl;
    cin >> l>> r;
    int sum = 0;
    for(int i =l; i<=r; i++){
        sum = sum +v[i];
    }
    cout<<sum;
      
   return 0;
}