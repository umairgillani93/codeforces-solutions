// Maximum sum subarray of 'K' distinct elements
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
	int sum = 0;
	int best = INT_MIN;
	unordered_map<int, int> freq;

	for (int j = 0; j < n; j++) {
		freq[a[j]]++;
		sum += a[j];
		while (freq.size() > k) { // found more than 'k' distinct items
			freq[a[i]]--;
			sum -= a[i];
			if (freq[a[i]] == 0) {
				freq.erase(a[i]);
			}
			i++;
		}
		if (freq.size() == k) {
			best = max(best, sum);
		}
	}
	cout << (best == INT_MIN ? -1 : best) << '\n';

	return 0;
	
}
