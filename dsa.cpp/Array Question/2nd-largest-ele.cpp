//find the second the largest element in the Given Array;

//using main method 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v = {12, 23, 4, 5, 7, 61, 23};
//     int max = v[0];
//     int index = -1;
//     for(int i = 1; i<v.size(); i++){
//         if(v[i]> max){
//             max = v[i];
//             index = i;
//         }
//     }
//     cout <<"First Largest Element "<< max<<" and the index are: "<<index<< endl;

//     v[index]= -1; 
    

//    cout<< v[index]<<endl;

//    max = v[0]; //Reset n to the first element;

//     for(int i = 0; i<v.size(); i++){
//         cout << v[i]<<" ";
//     }
//     cout <<endl;

//     for(int i = 0; i<v.size(); i++){
//         if(v[i]>max){
//             max = v[i];
//             index = i;
//         }
//     }
//     cout <<"second Largest Element "<< max<<" and the index are: "<<index<< endl;

//     return 0;
// }



// using function to find the dupicate element:

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int largestElementIndex(vector<int>v){
//     int n = v.size();
//     int max = INT_MIN;
//     int index = 0;
//     for(int i = 0; i<n; i++){
//         if(v[i] > max){
//             max = v[i];
//             index = i;
//         }
//     }
//     return index;
// }
// int main(){
//     vector<int>v = {12, 23, 4, 5, 7, 61, 23};
//     int indexOfLargest = largestElementIndex(v);
//     cout <<"First largest element: "<<v[indexOfLargest]<<endl;
    
//     v[indexOfLargest] = -1;

//     int indexOfSecondLargest = largestElementIndex(v);
//     cout <<"Second largest element: "<<v[indexOfSecondLargest];

    
//     return 0;
// }





//If the duplicate elements are present:
/*
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int LargestIndex(vector<int>v){
    int max = INT_MIN;
    int index = -1;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>max){
            max = v[i];
            index = i;
        }
    }
    return index;
}
int main(){
    vector<int>v = {12, 23, 4, 5, 7, 61, 61};
    int index = LargestIndex(v);
    // cout << v[index]<<endl;

    int largestElement = v[index];
    cout <<"Largest Element: "<< largestElement<<" ";
    for(int i = 0; i<v.size(); i++){
        if(v[i] == largestElement){
            v[i] = -1;
        }
    }
    cout << endl;
    // for(int i = 0; i<v.size(); i++){
    //     cout << v[i]<<" ";        //updated array 12 23 4 5 7 -1 -1 
    // }
    cout << endl;

    int indexOfSecondLargest = LargestIndex(v);
    cout <<v[indexOfSecondLargest]<<endl;
    return 0;
}

*/



// Another solution of find the second largest element

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int secondLargest(vector<int>v){

    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    for(int i = 0; i<v.size(); i++){
        if(v[i]>secondMax && v[i] != max){
            secondMax = v[i];
        }
    }
    return secondMax;
}


int main(){
    vector<int>v = {12, 23, 4, 5, 7, 61, 61};
    cout <<"Second Largest Element: "<<secondLargest(v);
    return 0;
}