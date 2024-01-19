// Questions add the common element or check the question after the 1 hour

// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main(){
//     int m , n;
//     cout <<"Size of m and n "<<endl;
//     cin >> m >> n;

//     vector<int>v1(m);
//     vector<int>v2(n);

//     cout << "Enter the element in the v1 "<<endl;
//     for(int i = 0; i<m; i++){
//         cin>>v1[i];
//     }
//     cout <<"Enter the element in the v2 "<<endl;
//     for(int i = 0; i<n; i++){
//         cin >>v2[i];
//     }
//     cout << endl;
//     int ans_sum = 0;
//     set<int> s1;

//     for(auto ele : v1){
//         s1.insert(ele);
//     }

//     for(auto ele: v2){
//         if(s1.find(ele)!=s1.end()){
//             ans_sum+=ele;
//         }
//     }
//     cout <<"Ans "<< ans_sum<<endl;
    
//     return 0;
// }
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int m , n;
    cout << "Enter the size of vector : ";
    cin >> m >> n;

    vector<int>v1(m);
    vector<int>v2(n);

    cout <<"Enter the Elements in the vector v1 "<<endl;
    for(int i = 0; i<m ; i++){
        cin >>v1[i];
    }
    cout <<"Enter the Elements in the vector v2 "<<endl;
    for(int i = 0; i<n; i++){
        cin >> v2[i];
    }

    set<int>s1;
    int sum = 0;
    for(auto ele: v1){
        s1.insert(ele);
    }

    for(auto ele: v2){
        if(s1.find(ele)!=s1.end()){
            sum = sum + ele;
        }
        
    }
    cout << "ans "<<sum;
    return 0;

}
