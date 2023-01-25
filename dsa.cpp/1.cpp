#include<iostream>
using namespace std;
int main()
{
     int item , i;
    char arr[42];
    
    for( int i=0 ; i<4; i++)
    {
        cin>>arr[i];
    }
cout<<"message";
for(int i=0; i<4; i++){
    cout<<arr[i];
}
cin>>item;
for(int i=0; i<4;i++){
  if (arr[i]==item)
  {
    cout<<"elements are found"<<i+1<< endl;
  }
  }
  return 0;
}
 
 

   
