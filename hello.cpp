#include<bits/stdc++.h>
using namespace std ;
int main()
{
    //print the reverse the of multiplier
    // int n = 3 , count =10;
    // for(int i = 30; i>=3; i=i-3){
    //     cout << n <<"*"<< count<<"="<<i;
    //     count--;
    //     cout << endl;
    //     }
    // int n = 30, i= 3, count= 10;
    // while(n>=3){
    //     cout <<i<<"*"<<count<<"="<< n<<" ";
    //     n=n-3;
    //     count--;
    //     cout<<endl
    // cout <<"for even number";
    // for(int i = 1; i<=100; i=i+2)
    //     cout << i<<" ";
    //     cout<<endl;

    // //for odd number
    // for(int i = 2; i<=100; i=i+2){
    //     cout << i<<" "; 
    // }
    // cout << endl;

    // for(int i = 100; i>=2; i=i-2)
    // cout << i<<endl;

    // int a  = 10; // a = 10;
    // int b = 30; // b = 30;
    // int temp;

    // fibonacci series
    // int a = 0 , b = 1, c ;
    // cout << a <<  " " <<b<<" ";
    // for(int i = 1; i<10;i++){
    //     c = a+b; 
    //     a = b;
    //     b = c;
    //     cout << c<<" ";
    // }
    // factorial number
    // int n1;
    // cin>> n1;
    // int n = 1;
    // for(int i = 1; i<=n1; i++){
    //     n = n * i;
    // }
    // cout << n;

    //check a leap year
    // int n;
    // cout << "Enter the Leap year ";
    // cin >> n;
    // if(n%400==0 && n%100==0 && n%4==0)
    //     cout << "Leap year";

    // else if(n%4==0 && n%100==0 && n%400!=0)
    //     cout << "Not a Leap year";

    // else if(n%4==0 && n%100!=0 && n%400!=0)
    //     cout << "Leap Year";

    // else
    //     cout <<"Not a Leap Year";

    // }
   // count the prime no between 1 to 100;
//     int i, k;
//    for(i = 2; i <= 100; i++){
//         for(k = 2; k<i; k++){
//             if(i % k == 0){
//                 cout <<"";
//                 break;
//             }
//         }
//         if(i == k)
//          cout<<k <<" ";
//     }    
    int n ;
    cin >> n;
    for(int i = 1; i<=n; i++){
        if(n%i != 0){
            cout << i<<" ";
        }
    }


   }
        



