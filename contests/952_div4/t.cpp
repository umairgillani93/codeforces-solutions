#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		long long sum = 0;
		for (int j = 0; j < i - 1; j++) {
			sum += a[j];
			//cout << a[j] << " ";
		}	
		if (sum == a[i]) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}

