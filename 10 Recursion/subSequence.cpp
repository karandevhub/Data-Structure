#include <iostream>
using namespace std;

void printSubSequence(string str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }
    // exclude the current character and move to the next
    printSubSequence(str, output, i + 1);
    // include the current character and move to the next
    output.push_back(str[i]);
    printSubSequence(str, output, i + 1);
}

int main()
{
    string str = "abc";
    int i = 0;
    string output = "";

    printSubSequence(str, output, i);

    return 0;
}
