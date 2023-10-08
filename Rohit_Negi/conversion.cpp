// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int num ;
// //     cin >> num;
// //     int rem = 0;
// //     int ans = 0;
// //     int mul = 1;
// //     while(num >0){
// //         rem = num % 2;
// //         num = num / 2;
// //         ans = rem*mul+ans;
// //         mul = mul*10;
// //     }
// //     cout << ans<<" ";

   
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int inp ;
//     cin >> inp;
//     int out=0;
//     int last_digit =0;

//     while(inp > 0){
//         last_digit = inp %10;

//         // out = last_digit;

//         out = out *10 + last_digit;

//         inp = inp /10;

//     }
//     cout << out;
// }
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>> n;
    int inp = 0;
    int ans = 0;
    int mul = 1;
    while(n> 0){
       inp   = n % 2;
       n = n/2;
       ans  = inp * mul +ans;
       mul = mul *10;

    }
    cout << ans;
}
