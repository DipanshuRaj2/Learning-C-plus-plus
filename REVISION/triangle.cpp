// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         int space = n - i;
//         for(int j = space; j>=1; j--){
//             cout<<" ";
//         }
//         for(int j = 1; j<=i; j++){
//             cout<<"*";
//         }
//         for(int j = 1; j<i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//    return 0;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    int space = 0;
    for(int i = 1; i<=3; i++){
        for(int j = 0; j<space; j++){
            cout<<" ";
        }
        space++;
        for(int j = n; j>=i; j--){
            cout<<"*";
        }
        for(int j = n; j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
   return 0;
}
/*
* * *
  * *
    * 
*/