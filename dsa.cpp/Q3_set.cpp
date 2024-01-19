#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        cout << arr[i]<<" ";
    }

    cout << endl;
    int ele , index;
     
    cin >> ele;
    cin >> index;
    for(int i = size+1; i>index; i--){
        arr [i]= arr[i-1];
        
    }
    arr[index] = ele;
    
    for(int i = 0; i<size+1; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}
//User function Template for C++

class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
              for(int i=sizeOfArray-1 ; i >= index; i--){
            arr[i+1] = arr[i];
    
       }
       arr[index] = element;       
    
        
        
    }
};