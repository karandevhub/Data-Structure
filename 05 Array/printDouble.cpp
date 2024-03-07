#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    cout << "enter elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout<<"doubles are:"<<endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << 2 * arr[i]<<endl;
    }

    return 0;
}