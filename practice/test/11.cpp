#include <bits/stdc++.h>
using namespace std;

int main() {
	// a + b = target
	// a = target - b;
	int n, k;
	cin >> n >> k;
	unordered_map<int, int> freq;
	freq.reserve(n); 
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (freq.count(k - x)) {
			cout << freq[k - x] + 1 << " " << i + 1 << '\n';
			return 0;
		}
		freq[x] = i;
	}
	cout << "IMPOSSIBLE" << '\n';
	return 0;
}
