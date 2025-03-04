// Lower bound: found 'X' greater than or equals to target
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int lo = 0;
	int hi = n - 1;
	int ans = - 1;
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (a[mid] >= k) {
			ans = a[mid];
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}
	cout << ans << '\n';
	return 0;
}
