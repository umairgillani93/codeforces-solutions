#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		
		int ans = n * a;

		if (ans > ((n / 2 * b) + (n % 2 * a))) {
			ans = (n / 2 * b) + (n % 2 * a);
		}

		cout << ans << '\n';

	}

	return 0;
}
