// sort the string

// #include<iostream>
// #include<string.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s ="star";
//     sort(s.begin(), s.end());
//     for(int i = 0; i<s.length(); i++){
//         cout<<s[i]<<"";
//     }
//    return 0;
// }

// Given two string s and t return true of s, and false otherwise. String s and t will only only contain lowercase alphabetical characters.

// Input1 s = "anagram", t = "nagaram"
// ouput1 : yes;

// input2 s = "bank" , t = "atm"
// output2 no

// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool checkAnagram(string s, string t){
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     if(s == t){
//         return true;
//     }
//     else{
//         false;
//     }

// }
// int main()
// {
//     string s = "bank" , t ="atm";

//     if(checkAnagram(s ,t)){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
//    return 0;
// }

// Example 1: Remove all characters except alphabets
//  #include<iostream>
//  #include<string.h>
//  using namespace std;
//  int main()
//  {
//      string s ;
//      getline(cin ,s);
//      string temp = "";
//      for(int i = 0; i<s.length(); i++){
//          if(s[i]>= 'a' && s[i] <='z' || s[i]>='A' && s[i] <= 'Z'){
//              temp = temp+s[i];
//          }
//      }
//      cout<< temp;
//     return 0;
//  }

// question 3 Count the vowel, Consonants, Digit, Whites spaces

/*#include<iostream>
using namespace std;
int main()
{
    int consonent  = 0, vowel = 0, number = 0, whitesSpaces = 0;
    cout<<"Enter the strings : "<<endl;
    string str;
    getline(cin , str);
    for(int i = 0; i<str.length(); i++){
        if(str[i] =='a' ||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i] =='O'||str[i] =='U')
        {
            vowel++;
        }

        else if((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >='A' && str[i] <='Z'))
        {
            consonent++;
        }

        else if(str[i] >= '0' && str[i] <='9')
        {
            number++;
        }
       else if(str[i]==' ')
        {
            whitesSpaces++;
        }
    }
    cout<<"consonent: "<<consonent<<endl;
    cout<<"vowel: "<<vowel<<endl;
    cout<<"whitesSpaces: "<<whitesSpaces<<endl;
    cout<<"numbers: "<<number<<endl;
   return 0;
}
*/

// C++ Program to Check Whether a character is Vowel or Consonant.
// #include <iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout << "Enter the alphabet: ";
//     cin >> c;
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//       cout<< c <<" is a Vowel.";
//     else if(c >= '0' && c <= '9'){
//         cout<<c<<" is not a character ";
//     }
//     else{
//         cout<<c <<" is a consonant.";
//     }
//         return 0;


// Program to count Occurences of Each Character in a String
#include<iostream>
using namespace std;
int main()
{
    string str ="hello how are you";
    cout<<"Enter Line of String : "<<endl;
    // getline(cin , str);
    int count;

    for(int i = 0; i<str.length(); i++){
        count = 0;
        for(int j = 0; j<str.length()-1; j++){
            if(j < i && str[i] == str[j]) {
                break;
            }
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count!= 0)
        cout<<str[i]<<" number of occurence : "<<count<<endl;
        
    }
    
   return 0;
}