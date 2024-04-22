#include <bits/stdc++.h>

using namespace std;

int main()  {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		if (arr.size() == 1 || arr.size() == 2) {
			cout << 0 << '\n';
		}

		else {
			unordered_map<int, int> map;
			for (int i = 0; i < arr.size(); i++) {
				map[arr[i]]++;
			}

			int count = 0;
			for (auto it = map.begin(); it != map.end(); it++) {
				if (it -> second >= 3) {
					count += it -> second / 3;
				}
			}

			cout << count << '\n';
		}
	}

	return 0;
}
