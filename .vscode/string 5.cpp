#include<iostream>
using namespace std;

int main() {
    string s = "codeforces";
    char ch = s[0];  // Save the first character

    cout << "Before left rotation: " << s << endl;

    for (int i = 0; i < s.size() - 1; i++) {
        s[i] = s[i + 1];  // Shift each character to the left
    }

    s[s.size() - 1] = ch;  // Put first character at the end

    cout << "After left rotation: " << s << endl;

    return 0;
}
