#include <iostream>
using namespace std;

int checkPrime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            return 1;
    }
            return 0;
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    if (checkPrime(n))
        cout << "not prime";
    else
        cout << "prime";
    return 0;
}