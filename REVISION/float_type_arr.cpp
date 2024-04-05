#include<bits/stdc++.h>
using namespace std;
int main()
{
float arr[] = {1.20, 4.56, 7.80, 10.0, 12.34};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n);
    for(int i = 0; i<n ; i++){
        cout<<fixed<<setprecision(2)<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<arr[0];
    cout<<endl;
    
    cout<<arr[n-1];

   return 0;
}
