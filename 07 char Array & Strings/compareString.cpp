#include <iostream>
using namespace std;

// int printUpperCase(string a, string b){

//         return a.compare(b);

// }

bool printUpperCase(string a, string b)
{

    if (a.length() != b.length())
        return false;
    else
    {

        for (int i = 0; i < a.length() - 1; i++)
        {
            if (a[i] != b[i])
                return false;
        }
    }
    return true;
}

int main()
{
    string a, b;
    cout << "enter string a" << endl;
    getline(cin, a);
    cout << "enter string b" << endl;
    getline(cin, b);
    if (printUpperCase(a, b))
        cout << "exactly same";
    else
        cout << "different";
    return 0;
}