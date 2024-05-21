#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string new_s = "";
		for (int i = 0; i < 2; i++) {
			new_s += s[i];
		}
		long long first = stoll(new_s);

		if (first == 12) {
			cout << first << ":" << s[3] << s[4] << " " << "PM" << '\n';
			continue;
		}
		if (first > 12) {
			first -= 12;
			cout << to_string(first) << ":" << s[3] << s[4] << " " << "PM" << '\n';
			continue;
		}

		if (first == 00) {
			cout << 12 << ":" << s[3] << s[4] << " " << "AM" << '\n';
			continue;
		}
		else {
			cout << s << " " << "AM" << '\n';
		}

	}
	return 0;
}
