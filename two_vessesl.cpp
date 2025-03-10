#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = 0;
		if (a == b) {
			cout << 0 << '\n';
			continue;
		}

		if (c > a && c > b) {
			cout << 1 << '\n';
			continue;
		}

		int mx = max(a, b);
		int mn = min(a, b);

		while (mx > mn) {

			mx -= c;
			mn += c;

			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
