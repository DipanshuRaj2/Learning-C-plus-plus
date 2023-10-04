#include<iostream>
using namespace std;
int main(){
    int num ;
    cin >> num;
    int rem = 0;
    int ans = 0;
    int mul = 1;
    while(num >0){
        rem = num % 2;
        num = num / 2;
        ans = rem*mul+ans;
        mul = mul*10;
    }
    cout << ans<<" ";

   
}