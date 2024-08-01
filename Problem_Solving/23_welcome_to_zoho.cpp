#include <iostream>
#include <vector>
#include <string>
using namespace std;

void searchSubstring(const vector<vector<char>>& matrix, const string& substring) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int len = substring.length();

    // Search left to right
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= cols - len; ++j) {
            bool found = true;
            for (int k = 0; k < len; ++k) {
                if (matrix[i][j + k] != substring[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                cout << "Found substring left to right: Start index: <" << i << "," << j << "> End index: <" << i << "," << j + len - 1 << ">" << endl;
            }
        }
    }

    // Search top to bottom
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i <= rows - len; ++i) {
            bool found = true;
            for (int k = 0; k < len; ++k) {
                if (matrix[i + k][j] != substring[k]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                cout << "Found substring top to bottom: Start index: <" << i << "," << j << "> End index: <" << i + len - 1 << "," << j << ">" << endl;
            }
        }
    }
}

int main() {
    vector<vector<char>> matrix = {
        {'W', 'E', 'L', 'C', 'O'},
        {'M', 'E', 'T', 'O', 'Z'},
        {'O', 'H', 'O', 'C', 'O'},
        {'R', 'P', 'O', 'R', 'A'},
        {'T', 'I', 'O', 'N', ' '}
    };

    string substring = "TOO";
    searchSubstring(matrix, substring);

    return 0;
}
