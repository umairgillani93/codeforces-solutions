#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			ans++;
		}
		else {continue;}
	}
	if (ans == 4 || ans == 7) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}
	
	return 0;
	
}
