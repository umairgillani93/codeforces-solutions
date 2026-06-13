#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	unordered_map<int, int> freq;
	int curr = 0, count = 0;
	freq[0] = 1; // before we start prefix sum = 0
	
	for (int i = 0; i < n; i++) {
		// returns number of subarrays having sum divisible by 'k'
		curr += a[i];
		if (freq.count(curr % k)) {
			count += freq[curr % k];
		}
		freq[curr % k]++;
	}
	cout << count << '\n';
	
	return 0;
}
