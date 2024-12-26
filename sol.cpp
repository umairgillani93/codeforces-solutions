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
		vector<int> freq(26, 0);
		for (int i = 0; i < n; i++) {
			freq[s[i] - 'a']++;
		}
		int lo = 0, hi = 0;
		for (int i = 1; i < 26; i++) {
			if (freq[i] < freq[lo]) lo = i;
			if (freq[i] > freq[hi]) hi = i;
		}
		
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'a' + lo) {
				s[i] = 'a' + hi;
			}
		}
		cout << s << '\n';
	}
	return 0;
}
