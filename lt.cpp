#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == s[i + 1]) {
			continue;
		}

		else {
			cout << s.size() - 1 << '\n';
			return 0;
		}
	}

	cout << -1 << '\n';
	
	return 0;
}
