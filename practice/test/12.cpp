/* - Two pointers
 * - Sliding window
 * - Hash table
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int j = 0; j < n; j++) {
		cin >> a[j];
	}

	int i = 0, best = 0;
	unordered_map<int, int> freq;
	freq.reserve(n);
	for (int j = 0; j < n; j++) {
		freq[a[j]]++;
		while (freq[a[j]] > 1) {
			freq[a[i]]--;
			i++;
		}
		best = max(best, j - i + 1);
	}
	cout << best << '\n';

	return 0;
}
