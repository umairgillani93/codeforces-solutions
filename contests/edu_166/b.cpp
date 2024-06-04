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
		vector<int> b(n + 1);
		for (int i = 0; i < n + 1; i++) {
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		
		int ans = 1;
		//auto lower = upper_bound(a.begin(), a.end(), b.back());
		//for (auto &c : a) {
		//	cout << c << " ";
		//}
		//cout << '\n';
		//for (auto &k : b) {
		//	cout << k << " ";
		//}
		
		auto Closest = [&](vector<int> &arr, int x) {
			int c = INT_MIN;
			for (int num: arr) {
				if (num <= x) {
					c = max(c, num);
				}
			}
			if (c != INT_MIN) {
				return c;
			}
			else {
				return 0;
			}

		};
		auto last = Closest(b, a.back());
		a.insert(a.begin() + n, a.back());
		
		for (int i = 0; i < n + 1; i++) {
			ans += abs(a[i] - b[i]);
		}
		cout << ans << '\n';
		//if (a.back() == b.back()) {
		//	cout << ans << '\n';
		//}
		//else {
		//	cout << ans - 1 << '\n';
		//}
	}
	return 0;
	
}

