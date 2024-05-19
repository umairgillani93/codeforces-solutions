#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<long long> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long ans = 0;

	if (k == 0) {
		ans = accumulate(arr.begin(), arr.end(), 0);
		cout << ans << '\n';
	}

	if (arr.size() == 1) {
		ans = arr[0];
		cout << ans << '\n';
	}

	else {
		while (k--) {
			long long dist = abs(arr[n - 2] - arr[n - 1]);
			int first = 0;
			int second = 1;
			for (int i = arr.size() - 1; i >= 0; i--) {
				if (abs(arr[i] - arr[i + 1]) > dist) {
					cout << "new_dist: " << dist << '\n';
					first = i;
					second = i + 1;
				}	
			}
			if (arr[first] <= arr[second]) {
				arr[second] = arr[first];
			}
			else {
				arr[first] = arr[second];
			}

			for (auto &k: arr) {
				cout << k << " ";
			}
			cout << '\n';
		}
	}


	return 0;
}
