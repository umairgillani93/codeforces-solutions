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
		auto NotPossible = [&](string s) {
			if (s.size() == 1) {
				return true;
			}
			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] == s[i + 1]) {
					continue;
				}
				else {
					return false;
				}
			}
			return true;
			
		};
		auto np = NotPossible(s);
		if (np) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] != s[i + 1]) {
					swap(s[i], s[i + 1]);
					cout << s << '\n';
					break;
				}
			}
		}
		}
}


