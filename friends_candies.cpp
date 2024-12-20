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
		long long sum = accumulate(a.begin(), a.end(), 0);
		if (sum % n == 0) {
			int t = sum / n;
			int ans = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] > t) {
					ans++;
				}
			}
			cout << ans << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
	return 0;
}
