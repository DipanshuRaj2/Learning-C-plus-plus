#include<bits/stdc++.h>
using namespace std;
int binToDecimal(int binary){
    int ans = 0;
    int i = 0;
    while(binary != 0){
        int digit = binary % 10;
        binary = binary/10;
        if (digit ==1)
        {
            ans = ans + pow(2,i);
        }
        i++;
    }
    return ans;
}
int main()
{
    int binary = 100000;
    cout<<binToDecimal(binary);
   return 0;
}