#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		//rotate(s.rbegin(), s.rbegin() + 1, s.rend());
		long long int one_cnt = 0;
		long long int ans = 0;

		if (count(s.begin(), s.end(), '0') == s.size() || count(s.begin(), s.end(), '1') == s.size()) {
			cout << 0 << '\n';
		}
		else {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '1') {
					one_cnt++;
				}
				else {
					if (one_cnt > 0) {
						ans += one_cnt + 1;
					}
				}
			}
			cout << ans << '\n';
		}
	}
	return 0;
}
