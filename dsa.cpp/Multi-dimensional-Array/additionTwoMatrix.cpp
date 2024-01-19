#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void Addition(vector<vector<int>> &matrixA, vector<vector<int>> &matrixB)
    {
        // Code here
        vector<vector<int>> ans(2);
        for (int i = 0; i < 2; i++)
        {
            cout<<i<<endl;
            for (int j = 0; j < 2; j++)
            {
                cout<<"j = "<<j<<endl;
                ans[i][j] = matrixA[i][j] + matrixA[i][j];
            }
        }
    }
};

int main()
{
    vector<vector<int>> matrixA = {{1, 2}, {3, 4}};
    vector<vector<int>> matrixB = {{4, 3}, {2, 1}};
    Solution s;
    s.Addition(matrixA, matrixB) ;
}