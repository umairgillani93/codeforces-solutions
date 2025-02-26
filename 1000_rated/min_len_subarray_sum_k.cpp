// smallest subarray with sum >= 'S'
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = INT_MAX;
	int sum = 0;
	int i = 0;
	for (int j = 0; j < n; j++) {
		sum += a[j];
		while (sum >= s) {
			ans = min(ans, j - i + 1);
			// cout << ans << '\n';
			sum -= a[i];
			i++;
		}
	}
	cout << ans << '\n';
	/*
	 * sum = 1
	 * sum = 3
	 * sum = 6, sum = 5, sum = 
	 */
	return 0;
	
}
