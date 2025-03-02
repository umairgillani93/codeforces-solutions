// Longest substring withtout repeating characters
#include <bits/stdc++.h>

using namespace std;

int main() {
	string a;
	cin >> a;
	unordered_map<char, int> freq;
	int n = a.size();
	int i = 0;
	int ans = INT_MIN;
	// abcabcbb
	// freq = {a: 2, b: 1, c: 1} ; ans = 3
	for (int j = 0; j < n; j++) {
		freq[a[j]]++;
		while (freq[a[j]] > 1) {
			freq[a[i]]--;
			i++;
		}
		ans = max(ans, j - i + 1);
	}
	cout << ans << '\n';
	return 0;

}
