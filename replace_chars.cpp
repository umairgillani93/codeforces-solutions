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
		map<char, int> mp;
		for (int i = 0; i < n; i++) {
			mp[s[i]]++;
		}
		int best = 0;
		int least = INT_MAX;
		char best_char = '\0';
		char least_char = '\0';
		for (auto it = mp.begin(); it != mp.end(); ++it) {
			if (it -> second >= best) {
				best = it -> second;
				best_char = it -> first;
			}
			if (it -> second < least) {
				least = it -> second;
				least_char= it -> first;
			}
		}
		for (int i = 0; i < n; i++) {
			if (s[i] == least_char) {
				s[i] = best_char;
				break;
			}
		}
		cout << s << '\n';
	}	
	return 0; 
}
