#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> set1; // declaration of a set //set<int, greater<int>>set1(it gives the o/p in the decreasing order)//7 6 5 4 3 2 1

    // insertion in a set
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);
    set1.insert(5);
    set1.insert(6);
    set1.insert(7);
    cout << "size of set1: " << set1.size() << endl; // 7

    set1.insert(3);

    // cout << "size of set1 after add the same element: " << set1.size() << endl; // 7

    // // size remains same because duplicate value is added
    // // and sets contain only unique elements
    // cout<<"traversing of a set "<<endl;
    
    // cout <<"(technique1 is little bit to understand) elements in the set1"<<endl;
    // set<int>::iterator itr;
    // for (itr = set1.begin(); itr != set1.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }
    // cout << endl;


    // cout << "technique2 is easy Elements in the set1: " << endl;
    for (auto value : set1)
    {
        cout << value << " "; // 1 2 3 4 5 6 7
    }
    cout << endl;

    // cout <<"Deletion in a set "<<endl;
    // cout <<"Deleting the element in the set  (3 techniques) "<<endl;

    // cout<<"1st one(direct value delete) "<<endl;

    //  set1.erase(3);
    //  for(auto itr :set1){
    //     cout << itr<<" ";
    //  }
    //  cout << endl;

    //  cout <<"2nd one(Delete with postion) "<<endl;

    //  auto itr = set1.begin();//point to the first element
    //  advance(itr ,3); //point to the 4th element;
    //  set1.erase(itr);


    //  for(auto value:set1){
    //     cout << value<<" ";
    //  }

//    cout <<"third technique (delete with range means from 2 to 4)"<<endl;
//     auto start_itr = set1.begin();//(start_itr is a variable)
//     start_itr++; //2

//     auto end_itr = set1.begin();//(end_itr is a variable)
//     advance(end_itr, 3);//4

//     set1.erase(start_itr, end_itr);

//     for(auto value:set1){
//         cout << value<<" ";
//     }
    cout<<endl;

// searching 
//using 1st technique
//find function return the position of element else return end iterator
    // if(set1.find(5)!=set1.end()){
    //     cout<<"value is present "<<endl;
    // }else{
    //     cout<<"Value is not present "<<endl;
    // }

//using 2nd technique
    if(set1.count(0)){ // it return no of occurence
        cout<<"value is present";
    }
    else{
        cout<<"value is not present ";
    }

}