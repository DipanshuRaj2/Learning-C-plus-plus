//Find the last occurence of an element x in a given array. 
//two way (1. traversing from 1st goes to the last)
//(2.traversing to the last goes to the first)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1(6);
    for(int i = 0; i<6; i++){
      cin >>v1[i];
    }
    cout <<endl;
    for(int i : v1){
        cout <<i <<" ";
    }
    cout<<endl;
    int x ;
    cin >> x;
    
    int occurence = -1;
    //first Technique

    // for(int i = 0; i<v1.size();i++){
    //     if(v1[i]==x){
    //         occurence = i;
    //     }
    // }
    // cout<<occurence<<endl;

    //2nd technique
    for(int i = v1.size()-1; i>=0; i--){
        if(v1[i]==x){
            occurence = i;
            break;
        }
    } 
    cout << occurence;
    
    return 0;
}