#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int item)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + (end - start) / 2);
        if (arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
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

    int index = BinarySearch(arr, 5, item);

    if (index < 0)
        cout << "not found";
    else
        cout << "found at index :" << index;
    return 0;
}