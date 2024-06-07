#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	auto Prefix = [&](vector<int> &arr) {
		vector<int> pref(arr.size(), 0);
		pref[0] = arr[0];
		for (int i = 1; i < n; i++) {
			pref[i] = pref[i - 1] + arr[i];
		}
		return pref;
	};
	int i = 0; 
	int j = n - 1;
	while (k > 0) {
		if (a[i] + a[i + 1] < a[n - 1]) {
			i += 2;
			k--;
		}
		else {
			j--;
			k--;
		}
	}
	long long sum = 0;
	auto pref = Prefix(a);
	cout << "i is: " << i << " " << "j is: " << j << '\n';
	for (int i = i; i <= j; i++) {
		sum += pref[i];
	}
	cout << sum << '\n';
	return 0;

}
