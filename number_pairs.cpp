#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, l, r;
		cin >> n >> l >> r;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		long long ans = 0;

		for (int i = 0; i < n; i++) {
			int lo = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
			int hi = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
			ans += (hi - lo);
		}
		cout << ans << '\n';

	}
	return 0;
}
