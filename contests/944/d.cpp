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
		int ans = 1;
		int i = 0; 
		bool check = false;
		for (int i = 0; i < s.size() - 1; i++) {
			if (s[i] != s[i + 1]) {
				ans++;
			}
			if (s[i] == '0' && s[i + 1] == '1') {
				check = true;
			}
		}

		if (check) {
			cout << ans - 1 << '\n';
		}
		else {
			cout << ans << '\n';
		}
	
	}
	return 0;
}
