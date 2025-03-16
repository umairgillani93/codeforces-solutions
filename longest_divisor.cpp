#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		int ans = 1;
		int count = 2;
		while (n % count == 0) {
			ans++;
			count++;
		}
		cout << ans << '\n';
	}
	return 0;
}
			
