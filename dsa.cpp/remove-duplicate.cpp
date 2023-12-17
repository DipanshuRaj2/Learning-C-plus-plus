#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n){
    int i = 0; 
    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }

    }
    return i+1;
}
int main(){
    int arr[] = {1, 2,2,3,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicates(arr , n);
    cout << "The array after removing duplicate elements is "<< endl;
    for(int i = 0; i < k; i++){
        cout << arr[i] <<" ";
    }
}
