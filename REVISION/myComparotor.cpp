#include<bits/stdc++.h>
using namespace std;
bool Dipanshu(pair<int,int> a , pair<int,int> b){
    // if(a.first == b.first){
    //     if (a.second > b.second) return true;
        
    //     return false;
        
    // }
    if(a.first > b.first)return true;
    
    return false;
}
void sorting(vector<pair<int, int>> v){
    sort(v.begin(), v.end(), Dipanshu);
    // sort(v.begin(), v.end());

    for(pair<int, int>&p:v){
        cout<<p.first<<","<<p.second<<" : ";
    }
    // for(int i = 0; i<v.size(); i++){
    //     cout<<v[i].first <<","<<v[i].second<<" : ";
    // }
}
int main()
{
    vector<pair<int, int>>v = {{2, 4} , {2,3}, {9,40}, {6,3}, {2,10}};
    sorting(v);
   return 0;
}