#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str = "((abc)((de))";
    stack<int> open_indices;
    stack<int> close_indices;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            open_indices.push(i);
        } else if (str[i] == ')') {
            if (!open_indices.empty()) {
                open_indices.pop(); // match found
            } else {
                close_indices.push(i);
            }
        }
    }

    // Create a boolean array to mark characters to be included in the final string
    bool to_include[str.length()];
    fill(to_include, to_include + str.length(), true);

    // Mark unmatched parentheses for exclusion
    while (!open_indices.empty()) {
        to_include[open_indices.top()] = false;
        open_indices.pop();
    }
    while (!close_indices.empty()) {
        to_include[close_indices.top()] = false;
        close_indices.pop();
    }

    // Construct the balanced string
    string balanced_str = "";
    for (int i = 0; i < str.length(); i++) {
        if (to_include[i]) {
            balanced_str += str[i];
        }
    }

    cout << balanced_str << endl;

    return 0;
}
