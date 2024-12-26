#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int sum = 1;
		int ans = 1;

		while (sum < n) {
			ans++;
			sum = sum * 2 + 2;
		}
		cout << ans << '\n';
	}

	return 0;
}

