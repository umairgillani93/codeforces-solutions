#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(6);
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < (1 << 6); i++) { // iterate over the range 2^6 i.e 0 - 63
		// grab numbers that have only 3-bits  set
		if (__builtin_popcount(i) == 3) {
			int ans = 0;
			for (int j = 0; j < 6; j++) {
				// check if jth bit of i is set
				if ((i >> j) & 1) {
					ans += a[j];
				}
				else {
					ans -= a[j];
				}
			}

			if (ans == 0) {
				cout << "YES" << '\n';
				return 0;
			}
		}
	}
	cout << "NO" << '\n';
	return 0;

}
