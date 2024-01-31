#include<iostream>
using namespace std;
bool check_The_Balance_Paranthesis(string str){
    int count1 = 0, count2 = 0; 
    for(int i = 0; i<str.length(); i++){
        if(str[i] =='(') {
            count1++;
        }
        else if(str[i] ==')'){
            count2++;
        }
    }

    if(count1 == count2){
        return true;
    }
    return false;
}
int main()
{
    string str;
    cin>> str;
    
    cout<<check_The_Balance_Paranthesis(str);
   return 0;
}