#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "abcabcbb";
	//cin >> s;
	int n = s.length();
	
	unordered_map<char, int> freq;
	int curr = 0, best = 0;
	int i = 0;
	for (int j = 1; j < n; j++) {
		freq[s[j]]++;
		while (freq[s[j]] > 1) {
			freq[s[j]]--;
			i++;
		}
		curr = j - i;
		best = max(best, curr);
	}


	cout << best << '\n';
	return 0;
}
