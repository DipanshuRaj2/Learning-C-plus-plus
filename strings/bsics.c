#include <stdio.h>

int main()
{
    char str[] = "abcr";
    char str1[] = "abae";

    // compare two strings lexicographically abc < adc
    int ans = strcmp(str1, str);
    // cout<<ans<<endl;

    /*
    char str2[5] ;
    str = "gfg" ;//error🔥 can't assign "gfg" to a constatnt address
    cout<<str<<<endl;
    */

    char str2[5];
    strcpy(str2, "lodu");
    cout << str2 << endl;
    return 0;
}