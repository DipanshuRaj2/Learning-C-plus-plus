#include <iostream>
using namespace std;
void countPrime(int n){
    int i,j;
    for(i = 2; i< n; i++){
        for(j = 2; j<i; j++){
            if(i%j == 0){
                break;
            }
           
        }
        if(j==i){
            cout<<j<<" ";
        }
    }

}
int main(){
    int n;
    cin >> n;
    countPrime(n);
}