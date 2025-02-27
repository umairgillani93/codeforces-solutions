// longest subarray with sum 'K'
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k; 
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	int ans = INT_MIN;
	int i = 0;
	for (int j = 0; j < n; j++) {
		sum += a[j];
		while (sum > k) {
			sum -= a[i];
			i++;
		}
		ans = max(ans, j - i + 1);
	}
	cout << ans << '\n';
	return 0;
}
