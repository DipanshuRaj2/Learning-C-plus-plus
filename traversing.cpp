#include<iostream>
using namespace std;
int main (){
	int n;
    cout<<"enter the size of array :";
    cin>>n;
    int array[n];
    cout<<"enter the elements :"<<endl;


    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"elements which is display "<<endl;
    for(int i=0; i<n;i++){
        cout<<array[i]<<"  ";
    }
	return 0;

}