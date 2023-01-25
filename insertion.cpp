#include<iostream>
using namespace std;
int main()
{
 int a[34], i, size ,pos, item;
 cout<<"enter the size of array ";
 cin>>size;
 cout<<"enter the array of elements"<<endl;
 for(i=0; i<size;i++){
	cin>>a[i];
 }
 cout<<"enter the position you want to insert "<<endl;
 cin>>pos;
 cout<<"enter the item you want to insert "<<endl;
 cin>> item;
 for(i=size-1;i>(pos-1); i--){
	a[i+1]=a[i];
 }

    a[pos-1]=item;
    size++;
	cout<<" your elements will be inserted" <<endl;
	for(i=0; i<size;i++){
	cout<<a[i]<<" ";
 }
}
