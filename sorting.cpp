#include<iostream>
using namespace std;
int main(){
  int ar[5], i, j, temp;
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