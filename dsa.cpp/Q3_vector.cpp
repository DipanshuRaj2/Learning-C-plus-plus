//count the number of the element strictly greater than value x;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1(6);
    for(int i= 0; i<v1.size();i++){
        cin>>v1[i];
    }

    cout <<"Enter x ";
    int x;
    cin >> x;
    int count = 0;
    for(int i = 0; i<v1.size(); i++){
        if(v1[i]>x){
            count++;
        }
    }
    cout <<"No. of element which is greater then x " <<count;
    return 0;
}