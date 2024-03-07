#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter a numbers of row" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= 2*(row - i) + 1; k++)
        {
            if (k % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << row-i+1;
            }
        }
        cout << endl;
    }
    return 0;
}
