#include <bits/stdc++.h>
// solution complexity: O(N^2)
// Runing time error
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		deque<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		auto Max = [&](deque<int> &arr) {
			int mx = arr[0];
			int mx_i;
			for (int i = 0; i < n; i++) {
				if (arr[i] >= mx) {
					mx = arr[i];
					mx_i = i;
				}
			}
			return mx_i;
		};
		auto mx_i = Max(arr);

		//if (arr[0] >= arr[mx_i] || arr[n - 1] >= arr[mx_i]) {
		//	cout << "NO" << '\n';
		//}
		auto AllZero = [&](deque<int> arr) {
			for (int i = 0; i < arr.size(); i++) {
				if (arr[i] != 0) {
					return false;
				}
			}
			return true;
		};
		
		if (arr[0] >= arr[mx_i] || arr[n - 1] >= arr[mx_i]) {
			cout << "NO" << '\n';
			continue;
		}

		bool ok = false;
		while (!ok) {
			for (int i = 2; i < n - 1; i++) {
				auto mx_i = Max(arr);
				arr[mx_i] -= 2;
				arr[mx_i - 1]--;
				arr[mx_i + 1]--;
				// for (auto &c: arr) {
				// 	cout << c << " ";
				// }
				// cout << '\n';

				if (arr[mx_i] < 0 || arr[mx_i - 1] < 0 || arr[mx_i + 1] < 0) {
					cout << "NO" << '\n';
					ok = true;
					break;
				
				}
				auto all_zero = AllZero(arr);

				if (all_zero) {
					cout << "YES" << '\n';
					ok = true;
					break;
				}

			}
		}
	}
	return 0; 
}
