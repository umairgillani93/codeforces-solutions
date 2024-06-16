#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n + 1);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n + 1; i++) {
			cin >> b[i];
		}
		long long last = b[n];
		long long ans = 0;
		bool chk = false;
		for (int i = 0; i < n; i++) {
			ans += abs(a[i] - b[i]);
			if (!chk) {
				if ((last >= a[i] && last <= b[i]) || (last >= b[i] && last <= a[i])) {
					chk = true;
					//ans++;
				}
			}
		}
		if (chk == false) {
			int min_diff = INT_MAX;
			for (int i = 0; i < n; i++) {
				int diff1 = abs(a[i] - last);
				int diff2 = abs(b[i] - last);
				if (diff1 < diff2) {
					min_diff = min(min_diff, diff1);
				}
				else {
					min_diff = min(min_diff, diff2);
				}
			}
			ans += min_diff;
		}
		cout << ans + 1 << '\n';
	}
	return 0;
}
