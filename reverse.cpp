#include <bits/stdc++.h>

using namespace std;

void swap(int &x, int &y) {
	int z;
	z = x;
	x = y;
	y = z;
}

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

		for (int i = 0; i < n - 1; i ++) {
			if (arr[i] > arr[i + 1] && abs(arr[i] - arr[i + 1]) > 1) {
				int c = i + 1;

				for (int j = c; j < n; i++) {
					if (arr[j] > arr[i] && arr[j] < arr[i + 1]) {
						swap(arr[i + 1], arr[j]);
					}
				}
			}

			else {
				swap(arr[i], arr[i + 1]);
			}
		}
		
		for (auto &c: arr) {
			cout << c << " ";

		}
		cout << '\n';
	}

	return 0;
}
