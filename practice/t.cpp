#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	// we are given two integers n, k
	// we need to creata an array of length n
	// such that n cyclic shifts of that array has exaclty k sorted arrays
	// cyclic shift of array a = a[i], a[i + 1], a[i + 2], ... , a[n] -> a[n], a[i + 1], a[i + 1],... , a[i]
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (n == k) {
			for (int i = 1; i <= n; i++) {
				cout << 1 << " ";
			}
			cout << '\n';
		}
		else if (k == 1) {
			for (int i = 0; i < n; i++) {
				cout << i + 1 << " ";
			}
			cout << '\n';
		}
		else {
			cout << -1;
			cout << '\n';
		}
	}
	return 0;
	
}
