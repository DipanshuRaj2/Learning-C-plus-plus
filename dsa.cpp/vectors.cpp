//dynamic array -> resize when insert/delete elements
//Contiguous memory allocation 
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int>v;
    // cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;

    // v.push_back(1);
    // cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;

    // v.push_back(3);
    // cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;

    // v.resize(5);
    // cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;

    // v.resize(7);
    
    // cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;

    // v.pop_back();
    // v.pop_back();
    //     cout << "Size: "<<v.size()<<endl;
    // cout << "Capacity: "<<v.capacity()<<endl;
    vector<int> v;
    for(int i = 0; i<5; i++){
        int element; 
        // cin >> v[i];
        cin >> element;
        v.push_back(element);
    }
    cout <<"size"<< v.size()<<"\n";
    cout <<"capacity"<< v.capacity()<<"\n";



    for(int i = 0; i<v.size(); i++){
        cout <<v[i]<<" ";
    }
    cout << endl<<endl;

    v.insert(v.end()-3,4);

    //for each loop
    for(int ele: v){
        cout << ele<<" ";
    }
   cout <<endl;
   
   v.erase(v.end()-2);
   //while loop
   int i = 0;
    while(i<v.size()){
        cout<<v[i++]<<" ";
    }
    return 0;
}