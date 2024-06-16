#include <bits/stdc++.h>

using namespace std;

int main() {
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
	int ans = 0;
	int last = b[n];
	bool chk = false;
	vector<int> diffs;
	for (int i = 0; i < n; i++) {
		ans += abs(a[i] - b[i]);
		if ((last >= a[i] && last <= b[i]) || (last >= b[i] && last <= a[i])) {
			ans++;
			chk = true;
		}
	}
	if (chk == true) {
		cout << "check true: " << '\n';
		cout << ans << '\n';
	}
	else {
		int min_diff = INT_MAX;
		for (int i = 0; i < diffs.size(); i++) {
			min_diff = min(min_diff, a[i]);
		}
		ans += min_diff;
		cout << ans << '\n';
	}
	return 0;
}

