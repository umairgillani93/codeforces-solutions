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
		vector<int> b;
		for (int i = 0; i < n - 1; i++) {
			int g = __gcd(a[i], a[i + 1]);
			b.push_back(g);
		}
		for (auto &c : b) {
			cout << c << " ";
		}
		cout << '\n';
		//if (is_sorted(b)) {
		//	cout << "YES" << '\n';
		//	continue;
		//}
		//
		vector<int> c;
		for (int i = 0; i < b.size() - 1; i++) {
			if (b[i] >= b[i + 1]) {
				continue;
			}
			else {
				c.push_back(b[i]);
			}

		}
		for (auto k :c) {
			cout << k << " ";
		}

		cout << '\n';
	}
	return 0;
}
