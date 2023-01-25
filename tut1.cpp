// #include<iostream>

// using namespace std;
// int glo =6;
// void sum(){
//     int a;
//     cout<< glo;
// }
// int main(){
//     int glo =9;
//     glo=78;

//     // int a=12;
//     // int b=15;
//     int a=12, b=15;
//     float pi=3.14;
//     char c=  'u';
//     bool is_true =false;
//     sum();


//     cout<<glo<< is_true;
  
//     // cout<<"this is tutorial 1. \nHere the value of a is "<<a<<".\nhe value of b is  "<<b;
    
//     // cout<<"\nthe value of pi is: "<<pi;
//     // cout<<"\nthe value of c is: "<<c;
    
    

// }
#include<iostream>
using namespace std;
int main(){
  int ar[5], i, j, temp;
  cout<<"enter the  array elements ";
  for(i=0 ; i<5; i++){
  cin>>ar[i];

}
for(i=0; i<5; i++)
{
    for(j=i+1;j<5;j++)
    {
        if(ar[i]<ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
            
        }
    }
}
cout<<"array elements";
for(i=0;i<5;i++){
    cout<<ar[i]<<" ";
}
return 0;
}