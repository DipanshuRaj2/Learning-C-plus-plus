#include<iostream>
#include<vector>
using namespace std;
int triplet(vector<int>v ,int target){
    int triplet_count = 0;
    for(int i = 0; i<v.size(); i++){
        for(int j = i+1; j<v.size(); j++){
            for(int k = j+1; k<v.size(); k++){
                if(v[i]+v[j]+v[k] == target){
                    triplet_count++;
                }
            }
        }
    }
    return triplet_count;
}
int main(){
    vector<int>v = {1,2,3,4,2,1};
    int target = 5;
    cout <<"triplet pairs are: "<<triplet(v , target);
    return 0;
}