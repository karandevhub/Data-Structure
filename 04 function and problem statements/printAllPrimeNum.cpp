#include <iostream>
using namespace std;

int checkPrime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
            cout << i;
    }
    return 0;
}