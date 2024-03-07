#include <iostream>
#include<cmath>
using namespace std;
void decimalToBinary(int n)
{
    int binary = 0;
    int j=0;
    for (int i = n; i > 0; i = i / 2)
    {
        int bit = i % 2;
        binary = bit*pow(10,j++)+binary; // reversal logic
    }
    cout<<binary;
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    decimalToBinary(n);
    return 0;
}