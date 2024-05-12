#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int res = 1;
		bool ok = false;
		for (int i = 0; i + 1 < s.size(); i++) {
			cout << i << '\n';
			if (s[i] != s[i + 1]) {
				res++;
			}
			if (s[i] == '0' && s[i + 1] == '1') {
				ok = true;
			}
		}
		if (ok) {
			res--;
		}
		cout << res << '\n';
				
	}
	return 0;
}
