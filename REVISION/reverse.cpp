#include<bits/stdc++.h>
using namespace std;
void intArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }

}
int main()
{
    int arr[] = {1,23,45,2,7,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    intArray(arr,n);
   return 0;

}