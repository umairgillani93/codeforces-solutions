#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		int res = 1;
		int c = 0;
		while (res <= r) {
			res <<= 1;
			c++;
		}
		cout << c - 1 << '\n';
	}
	return 0;
}
