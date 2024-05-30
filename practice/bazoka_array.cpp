#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = false;
        for (int i = 0; i < n; i++) {
            ok |= is_sorted(a.begin(), a.end());
            rotate(a.begin(), a.begin() + 1, a.end());
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

