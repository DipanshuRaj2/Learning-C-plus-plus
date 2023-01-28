/*
#include<iostream>
using namespace std;
int main(){

    char *ptr;
    char str[] = "abcdefg";
    ptr = str;

    ptr +=5;
    cout << ptr; //fg
    return 0;

}
*/

// Q 2
// Chapter Assignment
// Problem Statement: Characters  Pointers
/*
#include<iostream>
using namespace std;
int main(){
    char arr[20];
    int i;
    for(i = 0; i< 10; i++){
           *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr; //ABCDEFGHIJ
  return 0;
}
*/
// Q2
/*Chapter Assignment
Problem Statement: Pointers Output
#include<iostream>
using namespace std;
int main(){
    {
        int arr[] = {4,5,6,7};

        cout<<"arr = "<<&arr<<endl; //arr = 0x61fefc

        int *p = (arr +1);


        cout<<"p = "<<p<<" *p = "<<*p<<endl; //p = 0x61ff00 , *p = 5

        cout << *arr + 9; // 13
    }
    return 0;

}
*/
// Q3
//  Chapter Assignment
//  Problem Statement: Pointers Output
/*#include <iostream>
using namespace std;
int main()
{
    int numbers[5];

    int *p;

    p = numbers;

    *p = 10;

    p = &numbers[2];

    *p = 20;

    p--;

    cout << "p = " << numbers[2] << endl; // 20
    cout << "r = " << numbers[0] << endl; // 10

    cout << "p = " << *p << endl; //p = 6422280

    cout <<"numbers address = "<< numbers << endl;// numbers address = 0x61fef8
    *p = 30;

    cout << "q = " << numbers[1] << endl; //  q= 30

    p = numbers + 3; // show the index of 4(start with 0)


    *p = 40; // 4th index

    p = numbers;
    *(p + 4) = 50; //5th index
    int n = 0;
      for ( n=0; n<5; n++) {
         cout << numbers[n] << ","; //10,30,20,40,50,
      }


    return 0;
}
 */
// Q4
// Problem Statement: Pointers Output
/**
#include<iostream>
using namespace std;

void swap(char *x, char*y)
{
    char *t = x;
    x = y;        //swap
    y = t;
}
int main(){
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    swap(x,y);

    cout<<" "<<x <<" "<<y; //geeksquiz geeksforgeeks

    t = x;
    x =y;   // again swap
    y = t;

    cout <<" "<<x <<" "<<y; // geeksforgeeks geeksquiz
    return 0;

 //final output = geeksquiz geeksforgeeks geeksforgeeks geeksquiz
}
*/
// Q 5
// problem Statement : pointers output
/*
#include<iostream>
using namespace std;
int main(){
    float arr[5] = {12.5 , 10.0 ,13.5, 90.5 , 0.5};
    float *ptr1 = &arr[0];
    cout <<"*ptr1 = "<<*ptr1 << endl;// output =12.5
    float *ptr2 = ptr1 + 3;

    cout <<"*ptr2 = "<<*ptr2 << endl; // output =90.5


    cout << *ptr2<<" "; //same output = 90.5
    cout <<ptr2 - ptr1 <<endl ; // 3 (2nd no index - 1nd no. index)


    return 0;
}
*/

// Q 6
// pointer Output
/*
#include<iostream>
using namespace std;
int main(){
    char st[] = "ABCD";

    for(int i = 0; st[i] !='\0'; i++) {
        cout << st[i] <<*(st)+i <<*(i+st) <<i[st];//A65AAB66BBC67CCD68DD

    }
    return 0; //nahi samaj aa rhn hain;
}
*/

// Q 7
// Pointers Output
/*
#include<iostream>
using namespace std;
void Q(int z)
{
    z += z;
    cout << z <<" ";
}

void P (int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout <<x <<" ";
}
int main(){
    int x = 5;
    P(&x);
    cout << x;
    return 0;

    //output 14, 7 , 6
}
*/
// Q 8
/*Which of the following gives the memory address of variable 'b' pointed by pointer 'a' i.e.
int b = 10;
int *a = &b;*/
/*
#include <iostream>
using namespace std;
int main()
{
    int b = 10;
    int *a = &b;

    cout << " a = " << a << endl; // a = 0x61ff0c

    cout << " b = " << b << endl; // b = 10

    cout << " &a = " << &a << endl; // &a = 0x61ff08

    cout << " &b = " << &b << endl; // &b = 0x61ff0c
}
*/

// Q9
/*
#include<iostream>
using namespace std;
int main(){
    float f = 10.5;
    float p = 2.5;
    float*ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout <<*ptr <<" "<< f <<" "<< p; //2.5 2.5 2.5
    return 0;
//f = 10.5 , ptr = f(address)  = ptr = 2.5
}

*/
//Q : what is the output ?
#include<iostream>
using namespace std;
int main(){
    int *ptr = 0;
    int a = 10;
    *ptr = a;


    cout <<*ptr << endl;  // error
}