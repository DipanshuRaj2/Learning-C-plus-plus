#include<iostream>
using namespace std;
int main()
{
    int row1;
    cout<<"Enter the Number of rows for matrix1 : "<<endl;
    cin >>row1;
    
    int col1;
    cout<<"Enter the Number of columns for matrix1 : "<<endl;
    cin >> col1;
    
    int M1[row1][col1];

    cout<<"Enter the Elements in the matrix for "<<row1 <<"*" <<col1<<endl<<endl;;
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<col1; j++){
            cout <<"Enter the element in the M1["<<i<<"]"<<"["<<j<<"] = ";
            cin >> M1[i][j];
        }
    }

    //for the matrix 2

    int row2;
    cout<<"Enter the Number of rows for matrix2 : "<<endl;
    cin >>row2;
    
    int col2;
    cout<<"Enter the Number of columns for matrix2 : "<<endl;
    cin >> col2;
    
    int M2[row2][col2];

    cout<<"Enter the Elements in the matrix for "<<row2 <<"*" <<col2<<endl<<endl;;
    for(int i = 0; i<row2; i++){
        for(int j = 0; j<col2; j++){
            cout <<"Enter the element in the M2["<<i<<"]"<<"["<<j<<"] = ";
            cin >> M2[i][j];
        }
    }
    cout<<"Addition of matrix : "; 
    int ans[row1][col1];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            ans[i][j]=M1[i][j]+M2[i][j];
        }
        cout<<endl;
    }
    for(int i = 0; i<2;i++){
        for(int j = 0; j<2; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}