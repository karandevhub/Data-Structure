#include <iostream>
using namespace std;

int BinarySearch(int arr[], int start,int end, int item)
{
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

int ExponentialSearch(int arr[], int n, int item)
{   
    if(arr[0]==item)
            return 0;
    int i=1;
    while(i<n && arr[i]<=item)
    {
       i= i*2;
    }
    return BinarySearch(arr,i/2,min(i,n-1),item);
}


int main()
{

    int arr[10];
    int item;
    cout << "enter elements" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "enter item" << endl;
    cin >> item;

    int index = ExponentialSearch(arr,10,item);

    if (index < 0)
        cout << "not found";
    else
        cout << "found at index :" << index;
    return 0;
}
