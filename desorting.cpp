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
		if (!is_sorted(a.begin(), a.end())) {
			cout << 0 << '\n';
			continue;
		}
		int ans = INT_MAX;
		for (int i = 1; i < n; i++) {
			ans = min(ans, a[i] - a[i - 1]);
		}
		ans = ans / 2 + 1;
		cout << ans << '\n';
	}

	return 0;
}
