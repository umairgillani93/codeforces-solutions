#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> p(n);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] = a[i] + p[i - 1];
	}
	int ans = 360;
	for (int i = 0; i < n; i++) {
		ans = min(ans, abs(2 * p[i] - 360));
	}
	cout << ans << '\n';
	return 0;
}

