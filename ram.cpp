#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		vector<int> p;
		for (int i = 0; i < n; i++) {
			p.push_back(i);
		}
		// sort vector 'p' w.r.t 'a'
		sort(p.begin(), p.end(), [&](int x, int y) {
				return a[x] < a[y];}
			);

		for (int i = 0; i < p.size(); i++) {
			if (a[p[i]] <= k) {
				k += b[p[i]];
			}	
		}
		cout << k << '\n';

	}
	return 0;
}

