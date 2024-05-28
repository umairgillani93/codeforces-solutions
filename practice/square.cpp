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
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		long long sq = sqrt(sum);
		long long new_s = static_cast<int>(sq);
		//cout << sum << " " << sq << " " << new_s << '\n';
		cout << (new_s * new_s == sum ? "YES" : "NO" ) << '\n';
	}
	return 0;
}
