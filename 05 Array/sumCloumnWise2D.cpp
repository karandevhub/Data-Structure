#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[][10],int m,int n){
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[j][i]<<" ";
        }
            cout<<endl;
    }
}

void printSumColumnWise(int arr[][10], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<"column wise sum :"<<sum<<endl;
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

    cout<<"enter elements :"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr,m,n);
    printSumColumnWise(arr, m, n);

    return 0;
}