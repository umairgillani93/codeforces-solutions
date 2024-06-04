#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ans = 0;
		int first = s[0] - '0';
		if (first == 0) {
			first = 10;
		}
		ans += abs(1 - first);
		for (int i = 0; i < s.length() - 1; i++) {
			int curr = s[i] - '0';
			int next = s[i + 1] - '0';
			if (curr == 0) {
				curr = 10;
			}
			if (next == 0) {
				next = 10;
			}

			ans += abs(curr - next);
		}
		cout << ans + 4 << '\n';
	}
	return 0;
}
