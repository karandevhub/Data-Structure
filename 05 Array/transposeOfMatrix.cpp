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

void makeTranspose(int arr[][10], int transpose[][10], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
}

int main()
{
    int arr[10][10];
    int transpose[10][10];
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
    makeTranspose(arr, transpose, m, n);
    cout << "transpose matrix :" << endl;
    printArray(transpose, n, m);
    return 0;
}