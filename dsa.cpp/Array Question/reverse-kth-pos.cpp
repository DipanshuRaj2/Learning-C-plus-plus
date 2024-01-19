//Reverse the array from the Kth postion 
/*
Sample Input 1:
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6
Sample Output 1:
1 2 3 4 6 5
10 9 8 6 7
Explanation 1:
For the first test case, 
Considering 0-based indexing we have M = 3 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case, 
Considering 0-based indexing we have M = 2 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}.
Sample Input 2:
2
7 3
1 4 5 6 6 7 7 
9 3
10 4 5 2 3 6 1 3 6
Sample Output 2:
 1 4 5 6 7 7 6
 10 4 5 2 6 3 1 6 3 
*/
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void ReverseArray(vector<int>&arr, int m){
    int start = m-1;
    int end = arr.size()-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
using namespace std;
int main()
{
    vector<int>v(6);

    cout <<"Enter the element in the vector "<<endl;
    for(int i =0; i<v.size(); i++){
        cin>>v[i];
    }

    cout <<"Enter the position "<<endl;

    int m; 
    cin >> m;

    cout<<"Output array after reversing"<<endl;
    ReverseArray(v , m);
    for(int i = 0; i<v.size();i++){
        cout << v[i]<<" ";
    }






}