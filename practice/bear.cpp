#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	a--;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int ans = 0;
	
	if (b[a] == 1) {
		ans++;
	}
	if (accumulate(b.begin(), b.end(), 0) == 1) {
		cout << 1 << '\n';
		return 0;
	}
	int pos_dist = a + 1;
	int neg_dist = a - 1;

	bool done = false;
	while (!done) {
		if (b[pos_dist] == 1 && b[neg_dist] == 1) {
			ans += 2;
			pos_dist++;
			neg_dist--;
		}

		pos_dist++;
		neg_dist--;

		if (pos_dist > n || neg_dist < 0) {
			done = true;
		}
	}
	cout << ans << '\n';

	// while (pos_dist <= n || neg_dist >= 0) {
	// 	if (b[pos_dist] == 1 && b[neg_dist] == 1) {
	// 		ans += 2;
	// 	}
	// 	else {
	// 		pos_dist++;
	// 		neg_dist--;
	// 	}
	// }
	// cout << ans << '\n';

	return 0;

}
