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
// Chapter Assignment
// Problem Statement: Pointers Output
#include <iostream>
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