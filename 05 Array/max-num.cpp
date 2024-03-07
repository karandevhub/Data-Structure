#include <iostream>
using namespace std;

void max(int arr[], int size)
{

    int max = arr[0]; //we can use INT_MIN inside <limit.h> which initialize with minimum possible value
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max=arr[i];
            
    }
        cout<<"maximum of array is : "<<max;
}

int main()
{

    int arr[5];
    cout << "enter elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    max(arr, 5);
    return 0;
}