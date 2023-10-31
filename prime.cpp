#include<iostream>
using namespace std;

int main(){
    int count=1;
    for (int i = 3; i <= 100; i++)
    {
        /* code */
        int count1=0;
        for (int j = 2; j < i; j++)
        {
            /* code */
            if(i%j==0)
            {
                count1++;

            }

        }
        if(count1==0)
        {
            cout<<i<<" ";
            count=count+1;
        }
        
        
        

    }

    cout<<endl;
    cout<<"the total prime is"<<count;
    
}