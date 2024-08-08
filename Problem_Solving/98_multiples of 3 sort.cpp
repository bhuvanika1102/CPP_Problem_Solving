#include <iostream>
using namespace std;

void customSort(int arr[], int n) {
    int multiplesOfThree[100], others[100];
    int countMultiples = 0, countOthers = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            multiplesOfThree[countMultiples++] = arr[i];
        } else {
            others[countOthers++] = arr[i];
        }
    }
//ascen
    for (int i = 0; i < countMultiples - 1; i++) {
        for (int j = 0; j < countMultiples - i - 1; j++) {
            if (multiplesOfThree[j] > multiplesOfThree[j + 1]) {
                swap(multiplesOfThree[j], multiplesOfThree[j + 1]);
            }
        }
    }

//des
    for (int i = 0; i < countOthers - 1; i++) {
        for (int j = 0; j < countOthers - i - 1; j++) {
            if (others[j] < others[j + 1]) {
                swap(others[j], others[j + 1]);
            }
        }
    }

    int index = 0;
    for (int i = 0; i < countMultiples; i++) {
        arr[index++] = multiplesOfThree[i];
    }
    for (int i = 0; i < countOthers; i++) {
        arr[index++] = others[i];
    }
}

int main() {
    int arr[] = {9, 1, 4, 7, 6, 2, 5, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    customSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
