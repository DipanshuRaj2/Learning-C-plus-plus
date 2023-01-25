#include <iostream>
using namespace std;
int main()
{
    int ar[34];
    for (int i = 0; i < 6; i++){

        cin >> ar[i];
    }
    cout << "the number are \n";
    for (int i = 0; i < 6; i++)
    {
        cout << ar[i]<<endl;
    }
    for (int i = 0; i < 6; i++)
    {
        if (ar[0] < ar[i])
        {
            ar[0] = ar[i];
        }
    }
cout<<"The largest number\n";
    cout << ar[0] << endl;
}