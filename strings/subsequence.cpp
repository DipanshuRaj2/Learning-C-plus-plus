#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, char letter)
{
    int ind1 = -1 , ind2 = -1;
for(int i = 0 ; i < s.length() ; i++)
{
    if(s[i] == letter)
    {
        i = i ;
        return true ;
    }

}
}

int main()
{
    string s = "ABCDE" ;
    string t = "AED" ;
    int i = -1 ;
    for(i = 0 ; i < t.length() ; i++)
    {
        if(isSubsequence(s ,t[i])){
            continue;
        }
        else{
            break;
        }
    }
    if(i == -1 || i != s.length()-1)
    {
        cout<<"not subsequence "<<endl;
    }


}