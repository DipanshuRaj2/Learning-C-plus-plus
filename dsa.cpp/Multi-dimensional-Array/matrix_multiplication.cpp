// #include<iostream>
// using namespace std;
// int main(){
//     int row1;
//     cout<<"row1 : ";
//     cin >> row1;

//     int col1;
//     cout<<"col1 : ";
//     cin >> col1;

//     int matrix1[row1][col1];

//     for(int i = 0; i<row1; i++){
//         for(int j = 0; j<col1; j++){
//             cin >> matrix1[i][j];
//         }
//     }

//     int row2;
//     cout<<"row2 : ";
//     cin >> row2;

//     int col2;
//     cout<<"col2 : ";
//     cin >> col2;

//     int matrix2[row2][col2];

//     for(int i = 0; i<row2; i++){
//         for(int j = 0; j<col2; j++){
//             cin >> matrix2[i][j];
//         }
//     }

//     if(col1 != row2){
//         cout<<"Matrix multiplication is not possible ";
//     }
//     else{
//     int C[row1][col2];
//     for(int i = 0; i<row1; i++){
//         for(int j = 0; j<col2; j++){
//             C[i][j] = 0;
//             for(int k = 0; k<col1;k++){
//                 C[i][j]+= matrix1[i][k]*matrix2[k][j];
//             }

//         }
//     }

//     cout<<"Matrix Multiplication: "<<endl;
//     for(int i = 0; i<row1; i++){
//         for(int j = 0;j<col2;j++){
//             cout<<C[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int row1 = 2;
    int col1 = 3;
    int M1[row1][col1] = {{3, 4, 5}, {2, 6, 1}};

    int row2 = 3;
    int col2 = 2;
    int M2[row2][col2] = {{2, 3}, {5, 6}, {4, 2}};

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << M1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix multiplication: "<<endl;
    int ans[row1][col2];
    if (col1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                ans[i][j] = 0;
                for (int k = 0; k < col1; k++)
                {
                    ans[i][j] +=  M1[i][k] * M2[k][j];
                }
            }
        }
        for(int i = 0; i<row1;i++){
            for(int j = 0; j<col2;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}i