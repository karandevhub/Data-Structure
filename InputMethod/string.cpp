#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// Function to handle array format input: ['A','B','C','D']
vector<string> input_array_format() {
    vector<string> arr;
    string input;
    cout << "Enter array in format ['A','B','C','D']: ";
    getline(cin, input);
    stringstream ss(input);
    char ch;
    string element;
    while (ss >> ch) {
        if (isalpha(ch)) {
            arr.push_back(string(1, ch));
        }
    }
    return arr;
}

// Function to handle space-separated input: A B C D
vector<string> input_space_separated() {
    vector<string> arr;
    string input;
    cout << "Enter strings separated by spaces (e.g., A B C D): ";
    getline(cin, input);
    stringstream ss(input);
    string element;
    while (ss >> element) {
        arr.push_back(element);
    }
    return arr;
}

// Function to handle comma-separated input: A,B,C,D
vector<string> input_comma_separated() {
    vector<string> arr;
    string input;
    cout << "Enter strings separated by commas (e.g., A,B,C,D): ";
    getline(cin, input);
    stringstream ss(input);
    string element;
    char comma;
    while (getline(ss, element, ',')) {
        arr.push_back(element);
    }
    return arr;
}

// Function to handle manual input with no predefined format
vector<string> input_manual() {
    vector<string> arr;
    string element;
    cout << "Enter strings (press Enter after each one, press Enter twice to stop): " << endl;
    while (true) {
        getline(cin, element);
        if (element.empty()) break;
        arr.push_back(element);
    }
    return arr;
}

// Display vector of strings
void display_strings(const vector<string>& arr) {
    for (const string& str : arr) {
        cout << str << " ";
    }
    cout << endl;
}

int main() {
    cout << "\n=== String Input Examples ===" << endl;

    // Input methods
    vector<string> arr1 = input_array_format();
    cout << "Array format: ";
    display_strings(arr1);

    vector<string> arr2 = input_space_separated();
    cout << "Space-separated: ";
    display_strings(arr2);

    vector<string> arr3 = input_comma_separated();
    cout << "Comma-separated: ";
    display_strings(arr3);

    vector<string> arr4 = input_manual();
    cout << "Manual input: ";
    display_strings(arr4);

    return 0;
}




#include <iostream>
#include <vector>
#include <string>
using namespace std;

int removedWorth(const string& binary, const vector<int>& worth) {
    int totalRemovedWorth = 0;
    int length = binary.length();
    if (length < 2) return 0;

    int left = 0;
    int right = 1;

    while (right < length) {  // Correct variable name `length`
        if (binary[left] == binary[right]) {
            if (worth[left] > worth[right]) {
                totalRemovedWorth += worth[right];
                right++;
            } else {
                totalRemovedWorth += worth[left];
                left = right;
                right++;
            }
        } else {
            left = right;
            right++;
        }
    }

    return totalRemovedWorth;
}

int main() {
    string binary;
    cin >> binary;

    int length = binary.length(); // Fixed syntax and added `=` operator
    vector<int> wortharray(length);

    for (int i = 0; i < length; ++i) { // Corrected `lenght` typo to `length`
        cin >> wortharray[i];
    }

    cout << removedWorth(binary, wortharray) << endl;
    return 0;
}
