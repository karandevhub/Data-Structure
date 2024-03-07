#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "enter no of rows" << endl;
    cin >> row;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            if (k == 1 || k == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= row - i + 1; k++)
        {
            if (k == 1 || k == row - i + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
