#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		deque<int> dq(n);
		for (int i = 0; i < n; i++) {
			cin >> dq[i];
		}
		while (dq.size() > 1 && k) {
			int m = min(dq.front(), dq.back());
			if (k < 2 * m) {
				// check if 2 * min is greater than k
				// in this case we'll only process indivitual item
				// and k value will be zero at the end to break the loop
				dq.front() -= k / 2 + k % 2;
				dq.back() -= k / 2;
				k = 0;
			}
			else {
				dq.front() -= m;
				dq.back() -= m;
				k -= 2 * m;
			}
			
			if (dq.front() == 0) {
				dq.pop_front();
			}
			if (dq.back() == 0) {
				dq.pop_back();
			}
		}
		int ans = n - dq.size();
		cout << ans + (dq.size() && dq.front() <= k) << '\n';
	}
	return 0;
}
