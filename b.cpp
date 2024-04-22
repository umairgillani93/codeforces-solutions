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
		sort(arr.begin(), arr.end());
		unordered_map<int, int> map;

		for (int i = 0; i < arr.size(); i++) {
			map[arr[i]]++;
		}

		int count = 0;
		for (auto it = map.begin(); it != map.end(); it++) {
			if (it -> second > 1) {
				count += it -> second / 2;
			}
		}
		cout << count << '\n';
	}

	return 0;
}
