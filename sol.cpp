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
		int j = 0;

		for (int i = 0; i <= n - m; i++) {
			bool ok = true;
			int j = 0;
			while (j < m) {
				if (s[i + j] != '0') {
					ok = false;
					break;
				}
				j++;
			}
			if (ok) {
				ans++;
				i += (m + k - 2);
			}

		}
		cout << ans << '\n';
    }
    return 0;
}

