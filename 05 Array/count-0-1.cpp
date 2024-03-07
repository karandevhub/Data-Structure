#include <iostream>
using namespace std;

void count(int arr[], int size)
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            a++;
        else
            b++;
    }

    cout<<"numbers of 1's : "<<a;
    cout<<"numbers of 0's : "<<b;
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

    count(arr, 10);
    return 0;
}