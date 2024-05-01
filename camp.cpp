#include <bits/stdc++.h>

using namespace std;
/*
 * In this problem, we have intially got 3 inputs
 * a, b, c
 * a -> number of introverts, can have only 1 tent / person
 * b -> extroverts, each extrovert can have 2 other persons inside the tent
 * c -> universal, can have any number of persons with him from (1 - 3)
 */

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int ans = 0;
		ans += a;
		if (b == 0) {
			ans += 0;
		}

		if (b == 3) {
			ans += b /3;
		}

		else if (b < 3) {
			int t = c - (3 - b);
			ans += b + t / 3;
			c -= t;
			if (c < 0) {
				ans = -1;
			}
		
		}

		else {
			ans += b / 3;
			int r = b % 3;
			int t = c - (3 - r);
			ans += 1;
			c -= r;
			if (c < 0) {
				ans = -1;
			}
		}

		if (c == 0) {
			ans += 0;
		}

		else if (c == 1 || c == 2 || c == 3) {
			ans += 1;
		}

		else {
			ans += c / 3 + 1;
		}

		cout << ans << '\n';
	}

	return 0;
		
}
