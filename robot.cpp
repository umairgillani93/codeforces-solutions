#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
			
		long long n, x, k;
		cin >> n >> x >> k;
		string s;
		cin >> s;
		long long ans = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'L') {
				x--;
			}
			else {
				x++;
			}
			--k;
			if (x == 0) {
				ans++;
				break;
			}
		}
		// cerr << "x is: " << x << '\n';

		if (!x) {
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == 'L') {
					x--;
				}
				else {
					x++;
				}

				if (x == 0) {
					ans += k / (i + 1);
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;

}
