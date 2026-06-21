#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, x;
		cin >> a >> b >> x;
		if (a == b) {
			cout << 0 << '\n';
			continue;
		}
		int ans = INT_MAX;
		//cout << "max ans: " << a - b << '\n';
		int steps = 0;
		while (a != b) {
			if (a < b) swap(a, b);
			ans = min(ans, abs(a - b) + steps);
			a /= x;
			steps++;
		}
		cout << min(ans, steps) << '\n';
	}
	
	return 0;
}

