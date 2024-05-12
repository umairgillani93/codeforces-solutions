#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		string s;
		for (int i = 1; i <= 12; i++) {
			if (i == a || i == b) {
				s += "a";
			}
			if (i == c || i == d) {
				s += "b";
			}
		}

		if (s == "abab" || s == "baba") {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}


