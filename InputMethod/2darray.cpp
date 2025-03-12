#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// Function to handle input in bracketed format: [[1,2,3],[4,5,6],[7,8,9]]
vector<vector<int>> input_2d_array_bracketed() {
    vector<vector<int>> matrix;
    string input;
    cout << "Enter 2D array in format [[1,2,3],[4,5,6],[7,8,9]]: ";
    getline(cin, input);
    
    stringstream ss(input);
    char ch;
    vector<int> row;
    int num;

    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.putback(ch); // Put back the digit for reading the complete number
            ss >> num;
            row.push_back(num);
        } else if (ch == ']') { 
            if (!row.empty()) {
                matrix.push_back(row);
                row.clear();
            }
        }
    }
    return matrix;
}

// Function to handle space-separated rows: 
// 1 2 3
// 4 5 6
// 7 8 9
vector<vector<int>> input_2d_array_space_separated() {
    vector<vector<int>> matrix;
    string input;
    cout << "Enter rows of the 2D array, separated by spaces (press Enter twice to stop):" << endl;

    while (true) {
        getline(cin, input);
        if (input.empty()) break;

        stringstream ss(input);
        vector<int> row;
        int num;
        while (ss >> num) {
            row.push_back(num);
        }
        matrix.push_back(row);
    }
    return matrix;
}

// Function to handle comma-separated rows: 
// 1,2,3
// 4,5,6
// 7,8,9
vector<vector<int>> input_2d_array_comma_separated() {
    vector<vector<int>> matrix;
    string input;
    cout << "Enter rows of the 2D array, separated by commas (press Enter twice to stop):" << endl;

    while (true) {
        getline(cin, input);
        if (input.empty()) break;

        stringstream ss(input);
        vector<int> row;
        int num;
        char comma;
        while (ss >> num) {
            row.push_back(num);
            ss >> comma; // Skip commas
        }
        matrix.push_back(row);
    }
    return matrix;
}

// Display function for 2D array
void display_2d_array(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "=== 2D Array Input Examples ===" << endl;

    // Case 1: Bracketed input
    vector<vector<int>> matrix1 = input_2d_array_bracketed();
    cout << "Bracketed format:" << endl;
    display_2d_array(matrix1);

    // Case 2: Space-separated input
    vector<vector<int>> matrix2 = input_2d_array_space_separated();
    cout << "Space-separated rows:" << endl;
    display_2d_array(matrix2);

    // Case 3: Comma-separated input
    vector<vector<int>> matrix3 = input_2d_array_comma_separated();
    cout << "Comma-separated rows:" << endl;
    display_2d_array(matrix3);

    return 0;
}
