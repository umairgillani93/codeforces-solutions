// number of subarray that sum upto 'k'
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
	hash[0] = 1;
	long long sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];

		if (hash.find(sum - k) != hash.end()) {
			ans += hash[sum - k];
		}
		hash[sum]++;
	}
	cout << ans << '\n';
	return 0;
}
