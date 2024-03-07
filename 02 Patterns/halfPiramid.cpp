#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter a numbers of row" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 2*(row-i); j++)
        {
            cout <<" ";
        }
        for(int k=1;k<=i;k++)
        {
             cout << "* ";   
        }
        cout << endl;
    }
    return 0;
}
