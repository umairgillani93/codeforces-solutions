#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int ans = 0;
        int ones = 0;
        for (char c : s) {
            if (c == '1') {
                ones++;
            }
        }

        int zeros = 0;
        for (char c : s) {
            if (c == '0') {
                zeros++;
                ans += ones;
            } else {
                ans += zeros;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

