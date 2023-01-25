#include<iostream>
using namespace std;
int main(){
    int a[50] , size , pos;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"your elements in array :";
    for(int i=0; i< size; i++ )
    {
        cin>>a[i];
    }
    cout<<"from which position you want to delete : ";
    cin>>pos;
    if(pos<=0 && pos>size){
        cout<<"invalid position "<<endl;
    }
    else
    {
      for(int i=pos-1; i<size-1; i++)
      {
        a[i]=a[i +1];
      }
    }
    for()
    return 0;
}
