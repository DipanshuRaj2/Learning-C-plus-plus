#include<iostream>
using namespace std;

bool is_palindrome(string text)
{
    for(int i = 0; i < text.length()/2; i++){
        if(text[i] != text[text.length() - i- 1]) //left end of the character is start and right end is to the last
            return false;
    }
    return true;
}

int main(){
    string test1 = "abccba"; 

    string test2 = "racecar";



    // cout << is_palindrome(test2);
    if(is_palindrome(test1))
        cout << test1 <<"  -> is a palindrome" << endl;
    else
        cout << test1 <<"  -> is not a palindrome" << endl;

    if(is_palindrome(test2))
        cout << test2 <<" -> is a palindrome" << endl;
    else
        cout << test2 <<" -> is not a palindrome" <<endl;
}
