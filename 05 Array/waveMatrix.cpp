#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void makeWave(int arr[][10], int m, int n)
{
    for (int i = 0; i < n; i++)
    {

         if ((i & 1) == 0)
        {

            for (int j = 0; j < m; j++)
            {
                cout<< arr[j][i]<<" ";
            }
        }
        else
        {
            for (int j = m-1; j >=0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int arr[10][10];
    int m, n;
    cout << "enter number of rows : " << endl;
    cin >> m;
    cout << "enter number of columns : " << endl;
    cin >> n;

    cout << "enter elements :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Original matrix :" << endl;
    printArray(arr, m, n);
    makeWave(arr, m, n);
    return 0;
}