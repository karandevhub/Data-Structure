#include <iostream>
using namespace std;

char grade(int marks)
{
    char grade;
    switch (marks / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'E';
        break;
    }
    return grade;
}

int main()
{
    int num;
    cout << "enter number of student ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string name;
        int marks;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;
        cout << "enter the marks : ";
        cin >> marks;
        cout << name << "'s "
             << "grade is " << grade(marks) << endl;
    }
}