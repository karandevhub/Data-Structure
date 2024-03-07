#include <iostream>
using namespace std;

//first-occurance-in-sorted-array-using -Binary-Search

int BinarySearch(int arr[], int size, int item)
{
    int start = 0;
    int end = size - 1;
    int mid;
    int firstOccurance=-1;
    while (start <= end)
    {
        mid = (start + (end - start) / 2);
        if (arr[mid] == item)
        {
            firstOccurance=mid;
            end = mid - 1;
        }
            
        else if (arr[mid] < item)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return firstOccurance;
}

int main()
{

    int arr[8];
    int item;
    cout << "enter elements" << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    cout << "enter item" << endl;
    cin >> item;

    int index = BinarySearch(arr, 8, item);

    if (index < 0)
        cout << "not found";
    else
        cout << "first occurance at index :" << index;
    return 0;
}