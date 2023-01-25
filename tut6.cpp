#include<iostream>
using namespace std;
int main()
{
    //*******selection control structure:if else-if else ladder********
    // //cout<<"this is tut6";
    // int age;
    // cout<<"enter your age :"<<endl;
    // cin>>age;
    // if(age<18){
    //     cout<<"you are not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are to take permission to your family "<<endl;
    // }
    // else if((age<18) && (age>40)){
    //     cout<<"you are welcome to the party "<<endl;
    // }
    // else{
    //     cout<<"you are senior member  in the  party "<<endl;
    // }
    int age;
    cout<<"enter  your age :"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18 " <<endl;
        break;
    case 22:
        cout<<"you are 22 "<<endl;
        break;
    case 54:
        cout<<"you are 54 "<<endl;
        break;
    case 2:
        cout<<"you aare 2 "<<endl;
        break;
    default:
    cout<<"no special cases "<<endl;
    break;
    
        
    }
    return 0;

}