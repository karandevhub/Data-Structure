#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 10;
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(8);
    arr.pop_back();

    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
    cout << endl;
    cout << "is empty : " << arr.empty() << endl;
    cout << "capacity is " << arr.capacity() << endl;
    cout << "size is " << arr.size() << endl;
    return 0;
}