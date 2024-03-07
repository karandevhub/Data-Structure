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
           if(k==1 || k==i || i==row )
             cout <<k<<" ";
            else
                cout<<"  ";
        }
    cout<<endl;
    }
    return 0;
}
