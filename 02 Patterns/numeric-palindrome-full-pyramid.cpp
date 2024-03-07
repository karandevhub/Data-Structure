#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter a numbers of row" << endl;
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for(int k=1;k<=2*(row-i);k++){

            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
             cout <<k<<" ";   
        }
        for(int k=i-1;k>=1;k--)
        {
             cout <<k<<" ";   
        }
        cout << endl;
    }
    return 0;
}
