#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> pref(n);
	pref[0] = a[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}
	
	// slide the window to find max sum
	int best = pref[k - 1];

	for (int i = k; i < n; i++) {
		best = max(best, pref[i] - pref[i - k]);
	}

	cout << best << '\n';
	return 0;
}
