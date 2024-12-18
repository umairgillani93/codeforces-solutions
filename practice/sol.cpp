#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int c = 0;
	int pos = s.find("heavy");
	c = pos + 4;

	int ans = 0;
	for (int i = c + 1; i < s.size() - 4; i++) {
		if (s.substr(i, 5) == "metal") {
			ans++;
		}
	}
	if ((s.substr(0, 5) == "heavy") && (s.substr(s.size() - 5) == "metal")) {
		ans++;
	}
	cout << ans << '\n';

	return 0;
}
