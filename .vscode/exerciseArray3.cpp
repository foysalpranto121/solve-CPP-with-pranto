#include<iostream>
using namespace std;

int main() {
    // linear searching 
    int num[] = {10, 11, 3, 4, 6};
    int value, pos = -1;
    
    cout << "Search value: ";
    cin >> value;

    
    for (int i = 0; i < 5; i++) {
        if (value == num[i]) {
            pos = i + 1; // 1-based position
            break;
        }
    }

    // Print result AFTER the loop
    if (pos == -1) {
        cout << "Item not found" << endl;
    } else {
        cout << "Value found at position: " << pos << endl;
    }

    return 0;
}
