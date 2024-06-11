#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	auto Prefix = [&](vector<int> &arr) {
		int n = arr.size();
		vector<int> p(n, 0);
		p[0] = arr[0];
		for (int i = 1; i < n; i++) {
			p[i] = p[i - 1] + arr[i];
		}
		return p;
	};
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		auto p = Prefix(a);
		int cnt = 0;
		for (int i = 0; i < n - 1; i++) {
			if (a[i + 1] == p[i]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}	

	return 0;
}
