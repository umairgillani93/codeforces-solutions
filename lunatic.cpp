#include <bits/stdc++.h>
 
using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = __gcd(ans, abs(v[i] - v[n - i - 1]));
	}
	cout << ans << '\n';
}
 

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	return 0;
}
