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
		int res = count(s.begin(), s.end(), 'U');
		cout << (res % 2 != 0 ? "YES" : "NO") << '\n';
	}
	return 0;
}
