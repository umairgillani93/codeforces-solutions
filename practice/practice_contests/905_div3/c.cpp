#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int ans = 0;

		if (k == 4) {
			bool check = false;
			for (int i = 0; i < n; i++) {
				if (arr[i] == 4) {
					check = true;
					break;
				}
			}

			if (check == true) {
				cout << ans << '\n';
			}
			else {
				bool ok = false;
				for (int i = 0; i < n; i++) {
					if (arr[i] % 2 != 0 && arr[i] != 1) {
						continue;
					}
					else {
						ok = true;
						break;
					}
				}	
				if (ok == true) {
					int min_diff = INT_MAX;
					for (int i = 0; i < n; i++) {
						int curr_diff = (4 - arr[i] % 4);
						min_diff = min(min_diff, curr_diff);
					}
					ans = min_diff;
					cout << ans << '\n';
					continue;
				}
				if (n >= 2) {
					int cnt = 0;
					for (int i = 0; i < n; i++) {
						if (arr[i] % 2 == 0 && arr[i] != 4) {
							cnt++;
						}
					}
					ans = max(0, 2 - cnt);
					cout << ans << '\n';
				}
				else {
					if (arr[0] % 4 == 0) {
						cout << ans << '\n';
					}
					else {
						cout << abs(4 - arr[0]) << '\n';
					}
				}
			}
			continue;

		}

		bool check = false;
		for (int i = 0; i < n; i++) {
			if (arr[i] == k || arr[i] % k == 0) {
				check = true;
				break;
			}
		}

		if (check == true) {
			cout << ans << '\n';
		}
		
		else {
			int min_diff = INT_MAX;
			for (int i = 0; i < n; i++) {
				int curr_diff = abs(k - arr[i] % k);
				min_diff = min(min_diff, curr_diff);
			}
			ans = min_diff;
			cout << ans << '\n';
		}
	}
	return 0;
}
