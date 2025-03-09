#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int k = 0;

		for (int c = 1; abs(k) <= n; c++) {
			if (c % 2 == 0) {
				k += 2 * c - 1;
			}
			else {
				k -= 2 * c - 1;
			}

			if (abs(k) > n) {
				cout << (c % 2 != 0 ? "Sakurako" : "Kosuke") << '\n';
				break;
			}
		}

	}
	return 0;
}
	 
