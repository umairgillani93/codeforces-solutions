#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		int prev = -1;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		bool check = false;
		for (int i = 0; i < n; i++) {
			int a = arr[i] / 10;
			int b = arr[i] % 10;
			if (a >= prev && b >= a) {
				prev = b;
			}
			else if (arr[i] >= prev) {
				prev = arr[i];
			}
			else {
				cout << "NO" << '\n';
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "YES" << '\n';
		}
	}
	return 0;
}
