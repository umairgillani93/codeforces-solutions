#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s; 
	unordered_map<char, int> hash = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}
	};
	int ans = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == 'I' && s[i + 1] == 'V') {
			ans += 4;
			i++;
		}	
		else if (s[i] == 'I' && s[i + 1] == 'X') {
			ans += 9;
			i++;
		}
		else if (s[i] == 'x' && s[i + 1] == 'l') {
			ans += 40;
			i++;
		}
		else if (s[i] == 'X' && s[i + 1] == 'C') {
			ans += 90;
			i++;
		}
		else if (s[i] == 'C' && s[i + 1] == 'D') {
			ans += 400;
			i++;
		}
		else if (s[i] == 'C' && s[i + 1] == 'M') {
			ans += 900;
			i++;
		}
		else {
			ans += hash[s[i]];
			ans += hash[s[i + 1]];
			i++;
		}
	}

	if (s.length() % 2 != 0) {
		ans += hash[s[s.length() - 1]];
	}
	cout << ans << '\n';
	return 0;

}
