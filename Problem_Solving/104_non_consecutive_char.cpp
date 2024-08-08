#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    stack<char> stack;
    for (char c : s) {
        if (stack.empty() || c != stack.top()) {
            stack.push(c);
        }
    }

    // Construct the result from the stack
    string result;
    while (!stack.empty()) {
        result = stack.top() + result;
        stack.pop();
    }

    cout << "[" << result << "]" << endl;

    return 0;
}
