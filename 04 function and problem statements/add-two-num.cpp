#include <iostream>
using namespace std;
void sum(int a, int b)
{
    int sum = a + b;
    cout << "sum is " << sum;
}

int main()
{
    int a, b;
    cout << "enter two number" << endl;
    cin >> a;
    cin >> b;
    sum(a, b);
    return 0;
}