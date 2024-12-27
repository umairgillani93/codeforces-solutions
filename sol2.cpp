#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
 
        int ans = 0;
        for (int i = 0; i <= n - m; i++) {
            bool ok = true;
            for (int j = i; j < i + m; j++) {
                if (s[j] != '0') {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans++;
                i += (m + k - 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
