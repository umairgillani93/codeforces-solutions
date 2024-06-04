#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string s;
		cin >> s;
		unordered_map<char, int> mp;
		for (int i = 0; i < s.length(); i++) {
			mp[s[i]]++;
		}
		set<char> new_s;
		for (int i = 0; i < s.length(); i++) {
			new_s.insert(s[i]);
		}
		//for (auto &c : new_s) {
		//	cout << c << " ";
		//}
		int ans = 0;
		ans += (7 - new_s.size()) * m;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			int val = it -> second;
			if (val >= m) {
				continue;
			}
			else {
				ans += m - val;
			}
		}
			
		cout << ans << '\n';

	}
	return 0;
}

