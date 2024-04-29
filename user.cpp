#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string ans = "";
		reverse(s.begin(), s.end());
		
		if (s[0] != '0') {
			ans = s.substr(1, s.size());
			reverse(ans.begin(), ans.end());
		}
		else {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '0') {
					continue;
				}

				else {
					ans = s.substr(i, s.size());
					reverse(ans.begin(), ans.end());
					break;
				}
			}
		}

		cout << ans << '\n';
	}
	return 0;
}
