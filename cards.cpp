#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		unordered_map<int, int> mp;
		for (int i = 0; i < arr.size(); i++) {
			mp[arr[i]]++;
		}
		bool check = false;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			if (it -> second >= k) {
				check = true;
				break;
			}
			else {continue;};
		}
		if (!check) {
			cout << n << '\n';
		}
		else {
			cout << k - 1 << '\n';
		}
	}
}
