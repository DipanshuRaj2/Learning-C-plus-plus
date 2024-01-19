//Given an array of integer 'a' move all the even integer at the beginning of the array followed by all the odd integers. The relative order of odd or even integer does not matter. Return any array that satisfies the condition


//Example
// [1,2,3,4,5]  O/P =[2,4,1,3,5]
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int>v;
//     for(int i = 0; i<n; i++){
//         int ele; cin >> ele;
//         v.push_back(ele);
//     }

//     for(int i = 0; i<n; i++){
//         if(v[i] %2 == 0){
//             cout<< v[i]<<" ";
//         }
        
//     }
//     for(int i = 0; i<n; i++){
//         if(v[i]%2 ==1){
//             cout<<v[i]<<" ";
//         }
//     }
//    return 0;
// }



// another technique

#include<iostream>
#include<vector>
using namespace std;

void arrangeTheArray(vector<int>&v){
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]%2 == 1 && v[right_ptr]%2 == 0){
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++; right_ptr--;
        }
       if(v[left_ptr]%2==0){
        left_ptr++;
       }
       if(v[right_ptr]%2 == 1){
        right_ptr--;
       }
    }
    return;
}
int main()
{   
    int n;
    cin >>n;
    vector<int>v;

    for(int i =0; i<n; i++){
        int ele ; cin >> ele;
        v.push_back(ele);

    }

    arrangeTheArray(v);
    for(int i =0; i<n; i++){
        cout << v[i]<<" ";
    }

   return 0;
}