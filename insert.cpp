#include<iostream>
using namespace std;
int main()
{
 int a[10];	
 int x;
 int pos;
 int i;
 int n;
 cout<<"\nenter the size of array: ";
 cin>>n;
 
 cout<<"\nenter the array elements:";
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"\narray record before insertion:\n ";
 for(i=0;i<n;i++)
 {
 cout<<a[i]<<" ";
 	
 }
 cout<<"\nenter the element to be inserted:";
 cin>>x;
 
 cout<<"\nenter the position where need to insert element ";
 cin>>pos;
 
 for(i=n;i>pos;i--){
 	a[i]=a[i-1];
 }
    a[pos]=x;
    
    cout<<"\narray record after insertion :";
    for(i=0;i<=n;i++)
    {
    	cout<<a[i]<<" ";
	}
	
}



