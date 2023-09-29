#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int n1, n2;
    cin >> n1 >> n2;
    if (n1 > 0 && n2 > 0)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i < 10)
            {
                switch (i)
                {
                case 1:
                    cout << "One" << endl;
                    break;
                case 2:
                    cout << "Two" << endl;
                    break;
                case 3:
                    cout << "Three" << endl;
                    break;
                case 4:
                    cout << "Four" << endl;
                    break;
                case 5:
                    cout << "Five" << endl;
                    break;
                case 6:
                    cout << "Six" << endl;
                    break;
                case 7:
                    cout << "Seven" << endl;
                    break;
                case 8:
                    cout << "Eight" << endl;
                    break;
                case 9:
                    cout << "Nine" << endl;
                    break;
                }
            }

            else if (i >= 10)
            {
                if (i % 2 == 0)
                {
                    cout << "Even" << endl;
                }
                else
                {
                    cout << "Odd" << endl;
                }
            }
        }
    }
    return 0;
}
