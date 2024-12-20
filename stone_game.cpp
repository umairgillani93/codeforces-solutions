#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int min_idx = distance(a.begin(), min_element(a.begin(), a.end()));
		int max_idx = distance(a.begin(), max_element(a.begin(), a.end()));

		int moves = min({
				max(min_idx, max_idx) + 1,
				n - min(max_idx, min_idx),
				min_idx + 1 + n - max_idx,
				max_idx + 1 + n - min_idx,
				});

		cout << moves << '\n';
	}

	return 0;
}
