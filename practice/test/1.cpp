#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "loveleetcode";
	unordered_map<char, int> freq;

	for (int i = 0; i < s.length(); i++) {
		freq[s[i]]++;
	}
	char first = '\0';
	for (int i = 0; i < s.length(); i++) {
		if (freq[s[i]] == 1) {
			first = s[i];
			break;
		}
	}

	int res = 0;
	for (int j = 0; j < s.length(); j++) {
		if (s[j] == first) {
			res = j;	
			break;
		}
	}
	cout << res << '\n';
	return 0;
	
}
