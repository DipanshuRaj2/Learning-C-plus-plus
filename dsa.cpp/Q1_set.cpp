//Question Remove the duplicate name or check the pw stl videos in 1 hour 
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){

//     set<string>invitelist;
    
//     int n;
//     cin >> n;
//     string name;
//     while(n--)
//     {
        
//         cin >> name;

//         invitelist.insert(name);
//     }
//     cout<<"Final invite a name : "<<endl;
//     for(auto name:invitelist){
//         cout <<name<<endl;
//     }
//     return 0;
// }
#include<iostream>
#include<set>
using namespace std;
int main(){
    int n; 
    cin >> n;
    cout <<"Enter the name in the list "<<endl;
    set<string>s1;
    string name;
    while(n--){
        cin >> name;
        s1.insert(name);
    }
    cout <<"Final list "<<endl;
    for(auto name : s1){
        cout << name<<endl;
    }

    return 0;
}