#include <iostream>
#include <algorithm>
using namespace std;
int compare(int a, int b) {
    if (a > b)
        return 1;
    else if (a == b)
        return 0;
    else
        return -1;
}
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int array[] = {15, 10, 5, 3, 25, 35, 1};
    int length = sizeof(array) / sizeof(array[0]);
    int end = length - 1;
    int start = 0;
    int flag = 0;
    int swapIndex = start;

    for (int i = start; i <= end; ++i) {
        for (int j = i + 1; j <= end; ++j) {
            if (compare(array[i], array[j]) == -1) {
                swap(array[j], array[swapIndex]);
            }
        }
        if (flag == 0) {
            flag = 1;
            ++start;
            swapIndex = end;
        } else {
            flag = 0;
            --end;
            swapIndex = start;
        }
        if (start + 1 == end) {
            if (array[start] > array[end]) {
                swap(array[start], array[end]);
            }
        }
    }

    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
