#include <bits/stdc++.h>
using namespace std;

int main() {
	// maximum distinct items bounds
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		auto Check = [&](vector<int> &arr) {
			for (int i = 0; i < n - 1; i++) {
				if (arr[i] != arr[i + 1]) {
					return false;
				}
			}
			return true;
		};

		if (Check(a) && n > 1) {
			cout << 0 << '\n';
			continue;
		}

		if (n == 1) {
			cout << 1 << " " << 1 << '\n';
			continue;
		}
		int max_i, max_j = 0;
		int curr = 1;
		int l = 0;
		int best = INT_MIN;
		unordered_map<int, int> freq;
		for (int r = 0; r < n; r++) {
			freq[a[r]]++;
			while (freq[a[r]] > 1) {
				freq[a[l]]--;
				l++;
			}

			if (r - l + 1 > max_j - max_i + 1) {
				max_j = r;
				max_i = l + 1;
			}

		}
		cout << max_i << " " << max_j << '\n';
	}

	return 0;
}
