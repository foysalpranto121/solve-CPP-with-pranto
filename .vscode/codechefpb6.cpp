#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X;
        cin >> X; 
        if (X <= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}
