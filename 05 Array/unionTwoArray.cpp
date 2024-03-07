#include <iostream>
#include <vector>
using namespace std;

/// WITH DUPLICATE

vector<int> setUnion(vector<int> arrA, vector<int> arrB)
{
    vector<int> ans;
    for (int i = 0; i < arrA.size(); i++)
    {
        for (int j = 0; j < arrB.size(); j++)
        {
            if (arrA[i] == arrB[j])
            {
                arrB[j] = INT_MIN; // mark -so that don't check again
            }
        }
    }

    for (int i = 0; i < arrA.size(); i++)
        ans.push_back(arrA[i]);
    for (int i = 0; i < arrB.size(); i++)
    {
        if (arrB[i] != INT_MIN)
            ans.push_back(arrB[i]);
    }

    return ans;
}

int main()
{
    vector<int> arrA(5);
    vector<int> arrB(7);
    cout << "enter the element of array A :" << endl;
    for (int i = 0; i < arrA.size(); i++)
        cin >> arrA[i];

    cout << "enter the element of array B :" << endl;
    for (int i = 0; i < arrB.size(); i++)
        cin >> arrB[i];
    vector<int> ans = setUnion(arrA, arrB);
    cout << "Union :" << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
}