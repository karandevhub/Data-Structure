#include <iostream>
#include<cmath>
using namespace std;
void reverseNum(int n)
{
    int binary = 0;
    int j=0;
    for (int i = n; i > 0; i = i / 10)
    {
        int bit = i % 10;
        cout<<bit;
    }

}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    reverseNum(n);
    return 0;
}