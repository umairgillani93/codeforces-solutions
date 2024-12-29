#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		if (n == 1) {
			cout << 0 << '\n';
			continue;
		}
	
		int ans = 0;
		int curr = 1;
		sort(a.begin(), a.end());

		for (int i = 0; i < n - 1; i++) {
			if (abs(a[i] - a[i + 1]) <= k) {
				curr++;
			}
			else {
				curr = 1;
			}
			ans = max(ans, curr);
		}
		cout << n - ans << '\n';

	}
	return 0;}
