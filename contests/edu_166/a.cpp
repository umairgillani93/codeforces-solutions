#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		// cout << s << '\n';
		string new_s;
		new_s = s;
		sort(new_s.begin(), new_s.end());

		if (isdigit(new_s[0]) && isdigit(new_s[n - 1])) {
			cout << "YES" << '\n';
			continue;
		}
		else {
			if (new_s == s) {
				cout << "YES" << '\n';
			}
			else {
				cout << "NO" << '\n';
			}
		}
	}
	return 0;
}

