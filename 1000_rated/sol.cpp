// Count subarrays with atmost 'K' distinct elements
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
	int ans = 0;
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
		ans += (j - 1 + 1);
	}
	cout << ans << '\n';
	return 0;
}
