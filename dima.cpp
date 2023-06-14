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
	int ans;

	vector<vector<int>> output;

	if (q < *min_element(a.begin(), a.end())) {
		//cout << "q is: " << q << " min is: " << *max_element(a.begin(), a.end()) << '\n';
		ans = 0;
		cout << ans << '\n';
	}

	else {
		vector<int> v;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] <= q) {
				v.push_back(a[i]);
				continue;
			}

			else {
				output.push_back(v);
				v.clear();
			}
		}
	}

	for (int i = 0; i < output.size(); i++) {
		for (int j = 0; j < output[i].size(); j++) {
			cout << output[i][j] << " ";
		}
		cout << '\n';
	}
	
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	return 0;
}
