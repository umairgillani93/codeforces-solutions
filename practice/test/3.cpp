#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// Pattern: target - curr = b
	unordered_map<int, int> freq;
	for (int i = 0; i < n; i++) {
		int curr = x - a[i];
		if (freq.count(curr)) {
			// means it's there in frequency map
			cout << freq[curr] << " " << i << '\n';
			return 0;
		}
		else {
			freq[a[i]] = i;
		}
	}
	
	return -1;
}
