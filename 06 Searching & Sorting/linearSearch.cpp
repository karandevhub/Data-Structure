#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int item)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            cout << "found at index " << i<<endl;
        }
        if (i == size-1)
            cout << "not found!"<<endl;
    }
}

int main()
{

    int arr[5];
    int item;
    cout << "enter elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "enter item" << endl;
    cin >> item;

    linearSearch(arr, 5, item);
    return 0;
}