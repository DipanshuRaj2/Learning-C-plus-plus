#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[50] = {7, 2,3 , 5, 4,5};
    
    int ans = INT_MAX;
    //find minimum element
    for(int i = 0; i<6; i++){
        if(arr[i] < ans)
            ans = arr[i];
    }
    cout <<"Minimum Element: "<< ans << endl;

   int ans2 = INT_MIN;
    for(int i = 0; i < 6; i++){
        if(arr[i] > INT_MIN)
            ans2 = arr[i];
    }
    cout <<"Maximum Element: " <<ans2;
} 