#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "number of rows";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= row - i + 1; k++)
        {

            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
