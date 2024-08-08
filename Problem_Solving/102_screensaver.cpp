#include <iostream>
using namespace std;

int main() {
    int width = 40;
    int height = 30;
    int iter = 100;
    string str = "ZOHO";
    int curr_width_start = 0, curr_height = 0;
    int i = 0;
    int len = str.length() - 1;

    while (i != iter) {
        while ((curr_width_start + len != width - 1) && curr_height != height - 1 && i != iter) {
            cout << "(" << curr_height << "," << curr_width_start << ")" << endl;
            curr_height++;
            curr_width_start++;
            i++;
        }
        while ((curr_width_start + len != width - 1) && curr_height != 0 && i != iter) {
            cout << "(" << curr_height << "," << curr_width_start << ")" << endl;
            curr_height--;
            curr_width_start++;
            i++;
        }
        while (curr_width_start != 0 && curr_height != 0 && i != iter) {
            cout << "(" << curr_height << "," << curr_width_start << ")" << endl;
            curr_height--;
            curr_width_start--;
            i++;
        }
        if (curr_width_start != 0 && curr_height != height - 1 && i != iter) {
            cout << "(" << curr_height << "," << curr_width_start << ")" << endl;
            curr_height++;
            curr_width_start--;
            i++;
        }
    }

    return 0;
}
