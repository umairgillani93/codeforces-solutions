#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	string s;
	cin >> s;
	/* imaging our string is "101011"
	 * check out each element of the list
	 * if it's first '0' insert it at the front of first '1'
	 * in above case -> 011011 -> 001111 -> total cost becomes 
	 * 2 - 1 + 1 = 2
	 */
	/*
	 * go throught the string
	 * check if s[0] == '0'
	 * go through the chunk of string 0...i
	 * check if there's any '1' in it s[j] == 1
	 * 11000 -> first zero 
	 * 
	 */
	int ans = 0;
	bool done = false;
	int c = count(s.begin(), s.end(), '0');
	while (!done) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			for (int j = 0; j < i; j++) {
				if (s[j] == '1') {
					ans += i - j + 1;
					s.erase(i, 1);
					if (j == 0) {
						s.insert(0, 1, '0');
					}
					else {
						s.insert(j, 1, '0');
					}
					break;
				}
					
				}
			}
		}
		bool check = false;
		for (int i = 0; i < c; i++) {
			if (s[i] != '0') {
				check = true;
				break;
			}
			else {continue;};
		}
		if (!check) {
			done = true;
			cout << ans << '\n';
		}
	}
	}

	return 0;
}
