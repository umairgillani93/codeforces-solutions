#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = n + 1;
	for (char x = 'a'; x <= 'z'; x++) {
		int l = 0;
		int r = n - 1;
		int res = 0;
		while (l <= r) {
			if (s[l] == s[r]) {
				l++;
				r--;
			}
			else if (s[l] == x) {
				l++;
				res++;
			}
			else if (s[r] == x) {
				r--;
				res++;
			}
			else {
				res = n + 1;
				break;
			}
		}
	}
	
	if (ans = n + 1) {
		ans = -1;
	}
	cout << ans << '\n';
	return 0;
}
