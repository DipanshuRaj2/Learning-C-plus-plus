#include<iostream>
using namespace std;
int main()
{
    int row , column;
    cout <<"Enter the number of rows : "<<endl;
    cin >> row;

    cout<<"Enter the number of colums : "<<endl;
    cin >> column;

    
    int matrix[row][column];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout <<"Element at index ["<<i+1<<"]"<<"["<<j+1<<"] : ";
            cin >> matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            sum =sum+matrix[i][j];
        }
    }
    cout<<"Sum : "<<sum <<endl;
    float avg = sum/static_cast<float>(row*column);
    cout<<"Average : "<< avg <<endl;

    int max = matrix[0][0];
    int min = matrix[0][0];
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column;j++){
            if(matrix[i][j] > max)
                max = matrix[i][j];
            
            if(matrix[i][j] < max)
                min = matrix[i][j];
        }
        
    }
    cout <<"max : "<<max;
    cout <<"min : "<<min;
    return 0;
}