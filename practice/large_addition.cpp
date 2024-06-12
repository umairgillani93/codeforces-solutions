#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        n = n - n  % 10 + (n % 10 + 1) % 10;
        bool chk = false;
        while (n > 9) {
            if (n % 10 == 0) {
                cout << "NO" << '\n';
                chk = true;
                break;

            }
            else {
                n /= 10;
            }
        }
        if (chk == false) {
            cout << (n == 1 ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}

