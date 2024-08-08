#include <iostream>
using namespace std;

int main() {
    string string1 = "i live in madurai";
    string string2 = "live";
    int len_str1 = string1.length();
    int len_str2 = string2.length();
    int index = -1;
        for (int i = 0; i <= len_str1 - len_str2; i++) {
        int j;
        for (j = 0; j < len_str2; j++) {
            if (string1[i + j] != string2[j]) {
                break;
            }
        }
        if (j == len_str2) {
            index = i;
            break;
        }
    }
    
    if (index != -1) {
        cout << index << endl;
    } else {
        cout << " not found." << endl;
    }
    
    return 0;
}
