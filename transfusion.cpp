#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		long long odd_sum = 0;
		long long even_sum = 0;
		long long odd_count = 0;
		long long even_count = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if ((i + 1) % 2 == 0) {
				even_sum += a[i];
				even_count++;
			}
			else {
				odd_sum += a[i];
				odd_count++;
			}
		}
		
		//cout << odd_sum << " " << even_sum << " " << odd_count << " " << even_count << '\n';

		if ((odd_sum % odd_count == 0) && (even_sum % even_count == 0) && (odd_sum / odd_count == even_sum / even_count)) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}
