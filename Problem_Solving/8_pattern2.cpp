#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter an odd length word: ";
    cin >> word;

    int len = word.length();
    int mid = len / 2;

    for (int i = 0; i < len; i++) {
        // Print leading spaces
        for (int j = 0; j < len - i - 1; j++) {
            cout << " ";
        }
        // Print characters from the middle to the end
        for (int j = mid; j < len; j++) {
            cout << word[j];
        }
        // Print characters from the start to the middle - 1
        for (int j = 0; j < mid; j++) {
            cout << word[j];
        }
        mid--; // Decrement the starting point
        cout << endl;
    }

    return 0;
}