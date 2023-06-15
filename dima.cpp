#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	else {
		return n * fact(n - 1);
	}
}

int comb(int l, int k) {
	int c = fact(l) / fact(k);
	return c;
}


void sol() {
	int n, k, q;
	cin >> n >> k >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int ans = 0;
	int c = 0;
	vector<vector<int>> outer;
	vector<int> inner;

	if (q < *min_element(a.begin(), a.end())) {
		ans = 0;
		cout << ans << '\n';
	}

	else {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] <= q) {
				c++;
			}

			else {
				ans += comb(c, k);
				c = 0;
			}
		}
	}

	if (c > 0) {
		ans += comb(c, k);
	}

	cout << ans << '\n';
}


int main() {
	int t;
	cin >> t;
	while (t--) {
	sol();
	}
	return 0;
}
