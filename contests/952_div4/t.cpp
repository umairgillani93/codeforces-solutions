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
		int ans = 0;
		int s = 0;
		int mx = -1;
		for (int i = 1; i < n; i++) {
			s += a[i];
			mx = max(mx, s);
			if (2 * mx == s) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
