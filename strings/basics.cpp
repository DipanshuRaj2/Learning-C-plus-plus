#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    
    char str[] ="abcr";
    char str1 [] ="abae";

    //compare two strings lexicographically abc < adc
    int ans = strcmp(str1,str);
    // cout<<ans<<endl;


    char str2[5] ;
    str = "gfg" ;//error🔥 can't assign "gfg" to a constatnt address
    cout<<str<<<endl;


    char str2 [5] ;
    strcpy(str2,"lodu");
    cout<<str2<<endl;
    return 0 ;
    */

    string s = "geeksforgeeks";
    cout << s << endl;
    s = s + " se chittu padhta hai";
    cout << "after appending using <+> : " << s << endl;
    cout << "size of string: " << s.length() << endl;
    cout << "print substring: " << s.substr(14, 34) << endl;
    cout << "search any string in given string: " << s.find("padhta") << endl;

    string str;
    str.assign(s);
    cout << "printing string after assigning: " << str << endl;

    // string nik;
    // cout << "<cin input function >enter your full name " << endl;
    // cin >> nik;

    // cout << "your entered name : " << nik << endl;

    string chittu;
    cout << "enter your full name " << endl;

    getline(cin, chittu);
    cout << "your entered name : " << chittu << endl;

}