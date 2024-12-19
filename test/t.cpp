#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> &arr, int l, int c) {
	// assume arr is sorted in ascending order
	int lo = 0;
	int hi = arr.size() - 1;
	int res = 0;
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (c + arr[mid] >= l) {
			res = arr[mid];
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}
	return res;
}

int upperBound(vector<int> &arr, int r, int c) {
	int lo = 0;
	int hi = arr.size() - 1;
	int res = 0;
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (c + arr[mid] <= r) {
			res = arr[mid];
			lo = mid + 1;
		}
		else  {
			hi = mid - 1;
		}
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, l, r;
		cin >> n >> l >> r;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			auto lower = lowerBound(arr, l, arr[i]);
			auto upper = upperBound(arr, r, arr[ni);

			ans += (upper - lower);
		}
		cout << ans / 2 << '\n';

	}
	return 0;
}
