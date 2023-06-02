#include <bits/stdc++.h>

using namespace std;

void sol() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++ ) {
		if (s[i] == s[i + 1]) {
			continue;
		}

		else {
			int x;
			x = s.size() - 1;
			cout << x << '\n';
			return;
		}
	}

	cout << -1 << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}

	return 0;
}
