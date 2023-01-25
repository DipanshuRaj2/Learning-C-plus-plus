#include<iostream>
using namespace std;
int d =45;
int main()

// { ********* Build in data type**********
//     int a, b, c ,d;
//     cout<<"enter the value of a: "<<endl;
//     cin>>a;

//     cout<<"enter the b \n";
//     cin>>b; 
//     c = a+b;
//     cout<<"the sum is " <<c<<endl;
//     cout<<"the global d is "<<::d;


// {**********float , long double******** ,
//     float d =34.4F;
//     long double e =34.4L;
//     cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
//     cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
//     cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
//     cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
//     cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
// }


// {  ********reference variable********
//     float x = 45;
//     float & y =x;
//     cout<<x<<endl;
//     cout<<y<<endl;
{
    // ******* type cassting********
    int a =45;
    float b =45.56;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;
   
    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    
    int c=int (b);
    cout<<"the expression is "<<a + b<<endl;
    cout<<"the expression is "<<a + int(b)<<endl;
    cout<<"the expression is "<<a + (int)b<<endl;
    

    

}

