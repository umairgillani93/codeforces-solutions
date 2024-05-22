#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	vector<int> c(k);
	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}
	sort(t.begin(), t.end());
	sort(c.begin(), c.end());
	for (int i = 0; i < c.size(); i++) {
		int ans = *lower_bound(t.begin(), t.end(), c[i]);
		auto it = find(t.begin(), t.end(), ans);
		int idx = it - t.begin();
		t.erase(t.begin() + idx);
		//for (auto &c: t) {
		//	cout << c << " ";
		//}
		//cout << '\n';
		if (ans > c[i]) {
			cout << -1 << '\n';
		}
		else {
			cout << ans << '\n';
		}
	}

	return 0;
	
}
