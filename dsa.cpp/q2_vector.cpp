//Q no 2 count the number of the occurences of a particular element x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    int element;
    for(int i = 0; i<6; i++){
        cin >> element;
        v1.push_back(element);
    }
    cout<<"Enter x ";
    int x;
    cin>>x;

    int occurence =0;
    for(int i = 0; i<6; i++){
        if(v1[i] == x){
            occurence++;
        }
    }
    cout << occurence;
    return 0;
}