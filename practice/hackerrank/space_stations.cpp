#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	vector<int> a;
	for (int i = 0; i < n; i++) {
		a.push_back(i);
	}
	sort(b.begin(), b.end());
	int max_dist = 0;
	for (int i = 0; i < n; i++) {
		auto lower = lower_bound(b.begin(), b.end(), i);
		
		int dist = INT_MAX;

		if (lower != b.end()) {
			dist = min(dist, abs(i - *lower));
		}
		if (lower != b.begin()) {
			dist = min(dist, abs(i - *(lower - 1)));
		}
		
		max_dist = max(max_dist, dist);
	}
	cout << max_dist << '\n';
		
	return 0;
}
