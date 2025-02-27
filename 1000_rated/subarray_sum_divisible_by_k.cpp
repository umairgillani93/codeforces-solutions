// No. of subarrays where sum divisible by 'K'
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	unordered_map<int, int> hash;
	hash[0] = 1; // in-case of mod = 0;
	
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		int mod = ((sum % k) + k) % k;
		if (hash.find(mod) != hash.end()) {
			ans += hash[mod];
		}
		hash[mod]++;
	}
	cout << ans << '\n';
	return 0;
	
}
