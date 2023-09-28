#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string a){
    for(int i = 0; i < a.length()/2; i++){
        if(a[i] != a[a.length() - i - 1])
            return false;
    }
    return true;
    
}

int main(){
    int a  = 123321;

    string str = to_string(a);

    cout << is_palindrome(str);

}

