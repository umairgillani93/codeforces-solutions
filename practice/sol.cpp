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
			arr[i]--;
		}

		int ans = 3;
		for (int i = 0; i < arr.size() - 1; i++) {
			if ((arr[i] == i + 1) && (arr[i + 1] == i)) {
				ans = 2;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

