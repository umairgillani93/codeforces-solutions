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
		int ones = count(s.begin(), s.end(), '1');
		int zeros = count(s.begin(), s.end(), '0');

		if (ones == 2) {
			bool check = true;
			for (int i = 0; i < n - 1; i++) {
				if (s[i] == '1' && s[i + 1] == '1') {
					check = false;
					break;
				}
			}
			if (check == false) {
				cout << "NO" << '\n';
			}
			else {
				cout << "YES" << '\n';
			}
			continue;
		}
		
		if (ones % 2 != 0) {
			cout << "NO" << '\n';
		}

		else if (zeros == n) {
			cout << "YES" << '\n';
		}
		else {
			if (ones % 2 == 0 && zeros > 0) {
				cout << "YES" << '\n';
			}
			else if (zeros % 2 == 0 && ones > 0) {
				cout << "YES" << '\n';
			}
			else {
				cout << "NO" << '\n';
			}

		}
	}
	return 0;
}
	
