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
		int mx = -1;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			mx = max(mx, a[i]);
			sum += a[i];
			if (2 * mx == sum) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

