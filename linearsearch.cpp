#include<iostream>
using namespace std;
int main(){
    int ar[23], item ,i,flag=0;
    for(int i = 0; i<4; i++ )
    {
        cin>>ar[i];
    }
    cout<<"elements "<<endl;
    for(int i = 0; i<4; i++)
    {
        cout<<ar[i]<<endl;
    }
    cout<<"enter the elements you want to search :";
    cin>> item;
    for(int i=0;i<4;i++)
    {
        if(ar[i]==item)
        {
            cout<<"elements found "<<i<<endl;
            flag=1;
            break;
        }
    
    

    
    }
    if(flag==0)
    {
        cout<<"Not found";
    }   
      
       
    
    return 0;
}