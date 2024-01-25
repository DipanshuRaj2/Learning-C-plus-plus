
// matrix multiplication
#include<iostream>
using namespace std;
int main()
{
    
    cout << "row1 : ";
    int row1 ;
    cin >>row1;

    cout<<"col1 : ";
    int col1;
    cin >>col1;

    int M1[row1][col1];
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<col1;j++){
            cout<<"Enter the Element in the M1[" <<i<<"]"<<"["<<j<<"] : ";
            cin >> M1[i][j];
        }
    }
    cout << "row2 : ";
    int row2 ;
    cin >>row2;

    cout<<"col2 : ";
    int col2;
    cin >>col2;

    int M2[row2][col2];
    for(int i = 0; i<row2; i++){
        for(int j = 0; j<col2;j++){
            cout<<"Enter the Element in the M2[" <<i<<"]"<<"["<<j<<"] : ";
            cin >> M2[i][j];
        }
    }

    if(col1!=row2){
        cout<<"matrix multiplication is not possible : ";
    }
    else {
    int ans [row1][col2];
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<col2;j++){
            ans[i][j]= 0; 
            for(int k = 0; k<3;k++){
                ans[i][j]+=M1[i][k] * M2[k][j];
            }  
        }
    }
    for(int i = 0; i<row1;i++){
        for(int j = 0; j<col2; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
   return 0;
}