#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter a numbers of row" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            char ch = k + 'A'-1;
            cout << ch << " ";
        }
        for (int k = i - 1; k >= 1; k--)
        {
            char ch = k + 'A'-1;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
