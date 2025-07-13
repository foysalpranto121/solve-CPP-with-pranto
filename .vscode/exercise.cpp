#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << "Input number: " << n << endl;

        
        cout << "Numbers from 1 to " << n << ":" << endl;
        for (int i = 1; i <= n; i++) {
            cout << i << endl;
        }

       
        int sum = 0;
       
        for (int i = 1; i <= n; i++) {
            sum += i;
            cout << sum << endl;
        }

     
        if (sum % 5 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
