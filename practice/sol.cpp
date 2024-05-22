#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool ok = true;
		auto Check = [&](int n) {
			for (int i = 2; i < n; i++) {
				if (n % i == 0) {
					return false;
				}
			}
			return true;
		};
		// auto Factor = [&](int n, int i) {
		// 	if (n % i == 0) {
		// 		return true;
		// 	}
		// 	else {
		// 		return false;
		// 	}
		// };
		/* so the problem asks us to check if a number 'n' can be obtained by the product of binary decimals
		 * the approach is to factorize n and find it's prime factors
		 * if it has prime factor other than '2' and '5' then we cant show it as product of binary decimals
		 * because binary decimals are the power of the i.e 2 * 5 = 10 so there MUST only be two prime factors of 'n' i.e [2, 5]
		 */

		bool check = true;
		for (int i = 2; i < n; i++) {
			if (n % i == 0 && (i == 2 || i == 5)) {
				continue;
			}
			else {
				check = false;
				break;
			}
		}
		if (!check) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
		}
	}
	return 0;
}
