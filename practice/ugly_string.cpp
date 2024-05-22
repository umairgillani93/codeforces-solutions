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
		int first = 0;
		int second = 0;
		int ans = 0;
		for (int i = 0; i < n - 2; i++) {
			string sub = "";
			sub += s[i];
			sub += s[i + 1];
			sub += s[i + 2];

			if (sub == "pie" || sub == "map") {
				first++;
			}
		}

		for (int i = 0; i < n - 4; i++) {
			string sub = "";
			sub += s[i];
			sub += s[i + 1];
			sub += s[i + 2];
			sub += s[i + 3];
			sub += s[i + 4];
			if (sub == "mapie") {
				second++;
			}
		}
		cout << first - second << '\n';

	}
	return 0;
}
