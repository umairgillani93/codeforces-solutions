#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0) {
				arr[i] = -1 * arr[i];
			}
		}
		int sum = accumulate(arr.begin(), arr.end(), 0);
		cout << sum << '\n';
	}
	return 0;
}
