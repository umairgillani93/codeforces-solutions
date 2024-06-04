#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a = {1,2,3,4,5};
	vector<int> b = {0,4};
	sort(b.begin(), b.end());

	int max_dist = 0;
	for (int i = 0; i < a.size(); i++) {
		int dist = INT_MAX;
		auto lower = lower_bound(b.begin(), b.end(), a[i]);
		
		if (lower != b.end()) {
			dist = min(dist, abs(a[i] - *lower));
		}
		if (lower != b.begin()) {
			dist = min(dist, abs(a[i] - *(lower - 1)));
		}
		max_dist = max(max_dist, dist);
	}
	cout << max_dist << '\n';
	return 0;
	
}
