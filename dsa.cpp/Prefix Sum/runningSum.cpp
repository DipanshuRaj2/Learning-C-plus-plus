//Given an integer array 'a',return the prefix sum/running sum in the same array without creating a new array.        
//ex- {5,4,1,2,3};
// o/p {5 9 10 12 15};


// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v = {5, 4, 1, 2, 3};
//     vector<int> v1;

//     v1.push_back(v[0]);

//     for (int i = 1; i < v.size(); i++) {
//         int sum = v[i];  // Initialize sum with the current element in v
//         for (int j = 0; j < i; j++) {
//             sum += v[j];  // Add each element before the current element in v
//         }
//         v1.push_back(sum);
//     }

//     for (int i = 0; i < v1.size(); i++) {
//         cout << v1[i] << " ";
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void prefixSum(vector<int>&v){
    for(int i = 1; i<v.size(); i++){
        v[i] = v[i] + v[i-1];
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    prefixSum(v);
    for(int i = 0;i<n; i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

