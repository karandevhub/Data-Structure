#include <iostream>
#include<cmath>
using namespace std;
void reverseNum(int n)
{
    int decimal = 0;
    int j=0;
    for (int i = n; i > 0; i = i / 10)
    {
        int bit = i % 10;
        decimal = bit*pow(2,j++)+decimal;
    }
    cout<<decimal;

}

int main()
{
    int n;
    cout << "enter a binary number" << endl;
    cin >> n;
    reverseNum(n);
    return 0;
}