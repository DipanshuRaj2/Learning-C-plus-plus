#include<bits/stdc++.h>
using namespace std;
void countTheChar(string s){
    map<char , int>mpp;
    for(int i = 0; i<s.size(); i++){
        auto c = s[i];
        mpp[c]++;
    }
    // for(auto pair : mpp){
    //     cout<<pair.first<<" : "<<pair.second<<endl;
    // }
    for(auto it = mpp.begin(); it != mpp.end(); it++){
        cout<<it->first<<" : "<<it->second << endl;
    }
}
int main()
{
    string s = "asadklasdiwqdh bhdchd kjdcb";
    countTheChar(s);
   return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// void countTheChar(string s){
//     int count[256] = {0};
//     for(int i = 0; i<s.size();i++){
//         count[s[i]]++;
//     }
//     for(int i = 0; i < 256; i++){
//         if(count[i] > 0){
//             if(i == ' '){
//                 cout<<"space: "<<count[i]<<endl;
//             } 
//             else{
//             cout<< char(i)<<":"<<count[i]<<endl;
//             }
//         }
//     }
// }
// int main()
// {
//     string s = "asadklasdiwqdh wdwlknj lkdfjh";
//     countTheChar(s); 
//    return 0;
// }