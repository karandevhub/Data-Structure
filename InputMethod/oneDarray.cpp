#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// Function to handle array format input: [1,2,3,4,5]
vector<int> input_array_format() {
    vector<int> arr;
    string input;
    cout << "Enter array in format [1,2,3,4,5]: ";
    getline(cin, input);
    for (char c : input) {
        if (isdigit(c)) {
            arr.push_back(c - '0'); // Convert char to integer
        }
    }
    return arr;
}

// Function to handle space-separated input: 1 2 3 4 5
vector<int> input_space_separated() {
    vector<int> arr;
    string input;
    cout << "Enter numbers separated by spaces (e.g., 1 2 3 4 5): ";
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

// Function to handle comma-separated input: 1,2,3,4,5
vector<int> input_comma_separated() {
    vector<int> arr;
    string input;
    cout << "Enter numbers separated by commas (e.g., 1,2,3,4,5): ";
    getline(cin, input);
    stringstream ss(input);
    int num;
    char comma;
    while (ss >> num) {
        arr.push_back(num);
        ss >> comma; // Skip the comma
    }
    return arr;
}

// Function to handle semicolon-separated input: 1;2;3;4;5
vector<int> input_semicolon_separated() {
    vector<int> arr;
    string input;
    cout << "Enter numbers separated by semicolons (e.g., 1;2;3;4;5): ";
    getline(cin, input);
    stringstream ss(input);
    int num;
    char semicolon;
    while (ss >> num) {
        arr.push_back(num);
        ss >> semicolon; // Skip the semicolon
    }
    return arr;
}

// Function to handle hyphen-separated input: 1-2-3-4-5
vector<int> input_hyphen_separated() {
    vector<int> arr;
    string input;
    cout << "Enter numbers separated by hyphens (e.g., 1-2-3-4-5): ";
    getline(cin, input);
    stringstream ss(input);
    int num;
    char hyphen;
    while (ss >> num) {
        arr.push_back(num);
        ss >> hyphen; // Skip the hyphen
    }
    return arr;
}

// Display vector of integers
void display_integers(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== Integer Input Examples ===" << endl;

    // Input methods
    vector<int> arr1 = input_array_format();
    cout << "Array format: ";
    display_integers(arr1);

    vector<int> arr2 = input_space_separated();
    cout << "Space-separated: ";
    display_integers(arr2);

    vector<int> arr3 = input_comma_separated();
    cout << "Comma-separated: ";
    display_integers(arr3);

    vector<int> arr4 = input_semicolon_separated();
    cout << "Semicolon-separated: ";
    display_integers(arr4);

    vector<int> arr5 = input_hyphen_separated();
    cout << "Hyphen-separated: ";
    display_integers(arr5);

    return 0;
}
