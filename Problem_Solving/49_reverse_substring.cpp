#include <iostream>
#include <string>

using namespace std;

// Function to reverse the order of words starting from a given position
void reverseWordsFrom(string &str, int start) {
    int n = str.size();
    int end = start;

    // Skip initial spaces
    while (end < n && str[end] == ' ') end++;

    // Split into words and reverse them
    int wordStart = end;
    string result = str.substr(0, start);

    while (end < n) {
        // Find the end of the word
        while (end < n && str[end] != ' ') end++;
        // Add spaces before the word
        while (end < n && str[end] == ' ') end++;
        // Add the word to the result
        if (wordStart < end) {
            result = str.substr(wordStart, end - wordStart) + " " + result;
            wordStart = end;
        }
    }

    // Add trailing spaces
    while (start < n && str[start] == ' ') start++;
    result = result.substr(0, result.size() - 1); // Remove extra space at the end

    str = result;
}

int main() {
    string S1, S2;
    cout << "Enter string S1: ";
    getline(cin, S1);
    cout << "Enter string S2: ";
    getline(cin, S2);

    int pos = -1;

    // Find the first occurrence of S2 in S1
    for (int i = 0; i <= S1.size() - S2.size(); ++i) {
        bool found = true;
        for (int j = 0; j < S2.size(); ++j) {
            if (S1[i + j] != S2[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        // Find the start of the word that contains S2
        int wordStart = pos;
        while (wordStart > 0 && S1[wordStart - 1] != ' ') {
            wordStart--;
        }

        // Reverse the words starting from the identified word
        reverseWordsFrom(S1, wordStart);
    }

    cout << "Output: " << S1 << endl;

    return 0;
}
