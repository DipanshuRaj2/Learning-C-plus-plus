#include<bits/stdc++.h>
using namespace std;
void countTheChar(string s){
    map<char , int>mpp;
    for(int i = 0; i<s.size(); i++){
        auto c = s[i];
        mpp[c]++;
    }
    for(auto pair : mpp){
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
}
int main()
{
    string s = "asadklasdiwqdh";
    countTheChar(s);
   return 0;
}