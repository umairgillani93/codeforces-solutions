#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		long long k;
		cin >> n >> k;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int c = 0;
		bool done = false;
		int check = 1;
		while (!done) {
			if (check % 2 != 0) {
				arr[0]--;
				check++;
				if (arr[0] == 0) {
					c++;
					arr.erase(arr.begin() + 0);
				}
				if (arr.empty()) {
					done = true;
				}
			}
			else {
				arr[n - 1]--;
				check++;
				if (arr[n - 1] == 0) {
					c++;
					arr.erase(arr.begin() + n - 1);
				}
				if (arr.empty()) {
					done = true;
				}
			}
			k--;
			if (k == 0) {
				done = true;
			}
			for (auto &c: arr) {
				cout << c << " ";
			}
			cout << '\n';
		}
		cout << n - arr.size() << '\n';
	}
	return 0;

}
