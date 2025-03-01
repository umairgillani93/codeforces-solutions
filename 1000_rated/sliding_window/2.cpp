// Smallest substring with atmost 'K' distinct characters
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int i = 0;
	int ans = INT_MAX;
	unordered_map<int, int> freq;
	for (int j = 0; j < n; j++) {
		freq[a[j]]++;
		while (freq.size() > k) {
			freq[a[i]]--;
			if (freq[a[i]] == 0) {
				freq.erase(a[i]);
			}
			i++;
		}
		if (freq.size() == k) {
			ans = min(ans, j - i + 1);
		}
	}

	cout << (ans == INT_MAX ? -1 : ans) << '\n';
	return 0;
}
