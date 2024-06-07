#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	auto Prefix = [&](vector<int> &arr) {
		vector<int> pref(arr.size(), 0);
		pref[0] = arr[0];
		for (int i = 1; i < n; i++) {
			pref[i] = pref[i - 1] + arr[i];
		}
		return pref;
	};
	auto p = Prefix(a);
	return 0;
}

