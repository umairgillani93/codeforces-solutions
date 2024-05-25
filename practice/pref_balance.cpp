#include <bits/stdc++.h>

using namespace std;
int main() {
	string s;
	cin >> s;
	int b = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			b++;
		}
		else {
			b--;
		}
		cout << b << '\n';
	}
	return 0;
}
