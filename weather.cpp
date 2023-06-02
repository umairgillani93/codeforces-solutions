#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];

		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];

		}

		//sort(a.begin(), a.end());
		//sort(b.begin(), b.end());
		vector<int> bs;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (abs(a[i] - b[j]) <= k) {
					bs.push_back(b[j]);
					b.erase(b.begin() + j);
					break;
				}

				else {continue;};
			}

		}


		for (auto x: bs) {
			cout << x << " ";
		}
		cout << '\n';

	}

	return 0;
}
