#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 360;
	for (int l = 0; l < n; l++) {
		int sum = 0;
		for (int r = l; r < n; r++) {
			sum += a[r];
			ans = min(ans, abs(2 * sum - 360));
		}
	}
	cout << ans << '\n';
	return 0;
}

