#include <iostream>
using namespace std;

void max(int a, int b, int c)
{

    int d = a > b ? a : b;
    int m = d > c ? d : c;
    cout << "largest is " << m;
}

int main()
{
    int a, b, c;
    cout << "enter two number" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    max(a, b, c);
}