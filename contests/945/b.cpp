#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int res = arr[0] | arr[1];
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] | arr[i + 1] == res) {
			cout << res << '\n';
		}
	}
	return 0;
}
