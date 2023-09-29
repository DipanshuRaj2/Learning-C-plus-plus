#include<stdio.h>
int main(){

    char ch;

    while(scanf("%c",&ch))
     if(ch == '#')
     break;

    else
       printf("%c",ch);
       return 0;
}