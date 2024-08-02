#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& word) {
    int left = 0, right = word.length() - 1;
    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

// Function to split the sentence into words and find non-palindrome words
void findNonPalindromes(const string& sentence) {
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        if (!isPalindrome(word)) {
            cout << word << " ";
        }
    }
    cout << endl;
}

int main() {
    string input = "he knows malayalam";
    findNonPalindromes(input); // Output: he knows
    return 0;
}