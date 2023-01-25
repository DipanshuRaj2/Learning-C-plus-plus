#include<iostream>
using namespace std;
int main(){
    int a , max , i, min;
    cout<<"enter the size of array ";
    cin>>a;
    int ar[a];
    cout<<"enter the elements "<<endl;
    for(int i=0; i<a; i++)
    {
        cin>>ar[i];
    }

    for(int i=0; i<a; i++)
    {
     cout<<ar[i]<<" "<<endl;
    }
    max=ar[0];
    for( i=0; i<a; i++){
        if(ar[i]>max ){

        max=ar[i];
        }
    }
    cout<<"maximum no. is "<<endl;
    cout<<max<<endl;

    min=ar[0];
    for( i=0; i<a; i++){
        if (ar[i]<min){
            min=ar[i];
        }
    }
    cout<<"minimum no. is ";

    cout<<min<<endl;
    return 0;
}