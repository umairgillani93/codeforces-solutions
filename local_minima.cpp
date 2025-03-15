#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = 0;

	if (n == 1 || n == 2) {
		cout << ans << '\n';
		return 0;
	}

	for (int i = 1; i < n - 1; i++) {
		if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
		
}
