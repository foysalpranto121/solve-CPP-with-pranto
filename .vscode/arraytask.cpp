#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n]; // Array to store n elements

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp = -1e9; // Only declare once!

    // Find maximum number
    for (int i = 0; i < n; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }

    cout << "Maximum number is: " << temp << endl;

    return 0;
}
