#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		unordered_map<char, int> mp;

		for (int i = 0; i < s.length(); i++) {
			mp[s[i]]++;
		}
		if (n - k == 1) {
			cout << "YES" << '\n';
			continue;
		}
		int c = 0;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			if (it -> second % 2 != 0) {
				c++;
			}
		}
	
		if (c > k + 1) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
		}
		// int c = 0;
		// 
		// for (auto it = mp.begin(); it != mp.end(); it++) {
		// 	if (it -> second % 2 != 0) {
		// 		c++;
		// 	}
		// }

		// if (c == k) {
		// 	cout << "YES" << '\n';
		// }

		// else if (c > k) {
		// 	cout << "NO" << '\n';
		// }
		// else {
		// 	if (k - c == 1) {
		// 		cout << "YES" << '\n';
		// 	}
		// 	else {
		// 		cout << "NO" << '\n';
		// 	}	
	
		// }
	}

	return 0;
}
