#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	vector<int> freq(26, 0);
	for (int i = 0; i < n; i++) {
		freq[s[i] - 'a']++;
	}

	int best = 0;
	char mf = 'a';
	for (int i = 0; i < 26; i++) {
		if (freq[i] > best) {
			best = freq[i];
			mf = 'a' + i;
		}
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != mf) {
			s[i] = mf;
			break;
		}
	}
	cout << s << '\n';
	return 0;


}
