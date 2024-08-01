#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> petrol(n);
    vector<int> distance(n);
    
    for (int i = 0; i < n; i++) {
        cin >> petrol[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> distance[i];
    }
    
    int total_petrol = 0, total_distance = 0;
    for (int i = 0; i < n; i++) {
        total_petrol += petrol[i];
        total_distance += distance[i];
    }
    
    // If total petrol is less than total distance, it's not possible to complete the circle
    if (total_petrol < total_distance) {
        cout << -1 << endl;
        return 0;
    }
    
    int start = 0;
    int surplus = 0;
    int deficit = 0;
    
    for (int i = 0; i < n; i++) {
        surplus += petrol[i] - distance[i];
        
        if (surplus < 0) {
            start = i + 1;
            deficit += surplus;
            surplus = 0;
        }
    }
    
    if (surplus + deficit >= 0) {
        cout << start << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}