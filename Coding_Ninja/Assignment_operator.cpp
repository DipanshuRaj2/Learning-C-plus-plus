#include <iostream>
using namespace std;

int main()
{
  int i = 10;
  int *p = &i;

  cout << p << endl; //0x61ff08 address of p
  p = p + 2;
  cout << p << endl; //0x61ff10 8 byte increase

  cout << p << endl; //0x61ff10 
  p = p - 2;
  cout << p << endl; //0x61ff08 8 byte decrease

  double d = 102.3;
  double *dp = &d; 
  cout << dp << endl; //0x61fef8
  dp++;
  cout << dp << endl;//0x61ff00 increase add by 8




/*Practice Questions
Assignment Problem
Problem Name : What is the output
Problem Description 
*/
int c = 1;
int a = 7;
int *c = &a;
c = c + 1;
cout << a <<" " <<*c <<endl;  //7 858993459(garbage value)




}