#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    const char* input = "PROGRAM";
    int len = strlen(input);
    
    for (int i = 0; i < len; i++) {
        // Print leading spaces
        cout << setw((len - i) * 2);
        
        // Print the substring
        for (int j = 0; j <= i; j++) {
            cout << input[j];
        }
        cout << endl;
    }
    
    return 0;
}