#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	auto Evens = [&](vector<int> &arr) {
		int cnt = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] % 2 == 0) {
				if (arr[i] % 4 == 0) {
					return true;
				}
				else {
					if (arr[i] % 2 == 0) {
						cnt++;
						if (cnt == 2) {
							return true;
						}
					}	
			}
		}
	}
	return false;
	};

	auto OneEven = [&](vector<int> &arr) {
		int cnt = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] % 2 == 0 && !(arr[i] % 4 == 0)) {
				cnt++;
			}
		}
		if (cnt == 1) {
			return true;
		}
		else {
			return false;
		}
	};

	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int ans = 0;
		if (k == 4) {
			auto evens = Evens(a);
			auto one_even = OneEven(a);
			if (evens) {
				cout << ans << '\n';
				continue;
			}
			else if (one_even) {
				if (n >= 2) {
					cout << 1 << '\n';
				}
				else if (n == 1) {
					int min_diff = INT_MAX;
					for (int i = 0; i < a.size(); i++) {
						int res = ceil(a[i] / 4.0) * 4;
						int diff = res - a[i];
						min_diff = min(min_diff, diff);
					}
					cout << min_diff << '\n';

				}
				// int min_diff = INT_MAX;
				// for (int i = 0; i < a.size(); i++) {
				// 	if (a[i] % 2 == 0) {
				// 		continue;}
				// 	else {
				// 		if (a[i] == 1) {
				// 			int res = ceil(a[i] / static_cast<double>(k - 2)) * k - 2;
				// 			int diff = res - a[i];
				// 			min_diff = min(min_diff, diff);
				// 		}
				// 		else {
				// 			cout << "inside this else" << '\n';
				// 			int res = ceil(a[i] / 4.0) * 4;
				// 			int diff = res - a[i];
				// 			min_diff = min(min_diff, diff);
				// 		}
				// 	}
				// }
				// cout << min_diff << '\n';
				// continue;
			}
			else {
				int b = 2;
				for (int i = 0; i < a.size(); i++) {
					int res = ceil(a[i] / 4.0) * 4;
					int diff = res - a[i];
					b = min(b, diff);
				}	
				cout << b << '\n';
			}
		}
		else {
			int min_diff = INT_MAX;
			for (int i = 0; i < n; i++) {
				int res = ceil(a[i] / static_cast<double>(k)) * k;
				int diff = abs(res - a[i]);
				min_diff = min(min_diff, diff);
			}
			cout << min_diff << '\n';
			continue;
		}

	}
	return 0;
}
	

