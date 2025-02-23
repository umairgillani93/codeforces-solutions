//counting subarrays with sum divisilbe by k
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	unordered_map<int, int> rem;
	long long s = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
		int mod = ((s % k) + k) % k;
		if (rem.find(mod) != rem.end()) {
			ans += rem[mod];
		}
		rem[mod]++;
	}

	cout << ans + 1 << '\n';
	return 0;
}
