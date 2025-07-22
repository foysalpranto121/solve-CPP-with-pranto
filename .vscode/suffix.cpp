#include<iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n], suf[n];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build suffix sum array
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1)
            suf[i] = arr[i];
        else
            suf[i] = arr[i] + suf[i + 1];
    }

    // Answer queries
    while (q--) {
        int l, r;
        cin >> l >> r;

        int sum = suf[l];
        if (r < n - 1)
            sum -= suf[r + 1];

        cout << sum << endl;
    }

    return 0;
}
