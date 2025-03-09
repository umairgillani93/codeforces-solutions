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
		int ans = n + 1;
		// check for all the letters
		for (char x = 'a'; x <= 'z'; x++) {
			int lo = 0;
			int hi = n - 1;
			int res = 0;
			while (lo < hi) {
				if (s[lo] == s[hi]) {// no removal so no addition
					lo++;
					hi--;
				}
				else if (s[lo] == x) {
					// found character to remove
					lo++;
					res++; // raise counter to 1
					}

				else if (s[hi] == x) {
					hi--;
					res++;
				}
				else {
					res = n + 1;
					break;
				}
			}

			ans = min(ans, res);
			}
		if (ans == n + 1) {
			ans = -1;
		}
		cout << ans << '\n';
	}
	return 0;
}
