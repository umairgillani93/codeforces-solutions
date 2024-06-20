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
		int mn = max(a[0],  a[1]);
		for (int i = 1; i < n - 1; i++) {
			mn = min(mn, max(a[i], a[i + 1]));
		}
		cout << mn - 1 << '\n';
	}	

	return 0;
}

