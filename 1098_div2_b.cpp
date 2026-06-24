#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x1, x2, k;
		cin >> n >> x1 >> x2 >> k;
		int d = 0;
		if (n <= 3) d = 1;
		else {
			d = min(abs(x2 - x1), n - abs(x2 - x1)) + k;
		}
		cout << d << '\n';
	}
	return 0;
}
