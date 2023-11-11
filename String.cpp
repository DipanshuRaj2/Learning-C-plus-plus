#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    getlinefunction
    string s;
    getline(cin, s); // getline important concept of string to restore the string the value
    cout << s<<endl;
    cout << s.size();



    string s1 = "rohit", s2 = "Mohit";
    s1 = s1+'p';
    cout << s1;




string s ="rohit is a \"good\" boy";
cout << s;
cout << endl;
string s1 = "\\0";
cout << s1;

 //Reverse the Integer
    string s ="rohit";
    int start =0 , end = s.size()-1;
    while(start < end){
        swap(s[start],s[end]);
        start++ , end--;
    }
    cout << s<<endl;


// check the size of string
    // cout << s.size();
    int size = 0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout << endl;
    cout << size<<" ";

*/

    // check the palindrome string 
    // string s1  = "naman";
    // int start  = 0 ,end = s1.size()-1;

    // while(start < end){
    //     if(s1[start]!=s1[end])
    //     {
    //         cout <<"Not a Palindrome" ;
    //         return 0;
    //     }
    //     start++, end--;
    // }
    // cout << "It is a palindrome";
    // return 0;
       
//defanging an Ip address
    string address = "1.1.1.1";
    string ans;
    int index = 0;
    while(index < address.size()){
        if(address[index]=='.'){
            ans = ans +"[.]";
        }
        else{
            ans = ans +address[index];
        }
        index++;
    }
    cout << ans;
}