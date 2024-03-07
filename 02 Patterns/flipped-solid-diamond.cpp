#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "enter a numbers of row" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 4 * (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= row - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 4 * (row - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
