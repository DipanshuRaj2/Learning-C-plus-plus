//check the given array sort or not
/*Sample Input 1 :
4
0 0 0 1
Sample Output 1 :
1
Explanation For Sample Input 1 :
The given array is sorted in non-decreasing order; hence the answer will be 1. 
Sample Input 2 :
5
4 5 4 4 4
Sample Output 2 :
0*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1={1,2,45,4,5,6};

    bool sortedflag = true;
    for(int i = 1; i<v1.size(); i++){
        if(v1[i]<v1[i-1]){
        sortedflag = false;
    }
    }
    cout<<sortedflag<<endl;
    return 0;
}