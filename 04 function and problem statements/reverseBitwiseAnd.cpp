#include <iostream>
#include<cmath>
using namespace std;
void reverseNum(int n)
{
    int j=0;
    for (int i = n; i > 0; i = i >>1)
    {
        int bit = i & 1;
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