#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter a numbers of row" << endl;
    cin >> row;
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
