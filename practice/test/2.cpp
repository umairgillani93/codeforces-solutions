#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the array first
	//sort(a.begin(), a.end());

	int l = 0;
	int r = n - 1;
	while (l < r) {
		if (a[l] + a[r] == x) {
			cout << l << " " << r << '\n';
			break;
		}
		else if (a[l] + a[r] > x) {
			r--;
		}
		else {
			l++;
		}
	}
	return -1;
}
