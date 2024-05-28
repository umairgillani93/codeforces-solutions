#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// find all the subsets of vector 'a';
	vector<vector<int>> all;
	for (int mask = 0; mask < (1 << n); mask++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				subset.push_back(i);
			}
		}
		all.push_back(subset);
	}
	int ans = 0;
	for (int i = 0; i < all.size(); i++) {
		vector<int> all_i = all[i];
		if (all_i.size() == n) {
			int i = 0; 
			int j = all_i.size() - 1;
			bool check = false;
			while (i < j) {
				if (all_i[i] + all_i[j] % k == 0) {
					check = true;
				}
				else {
					i++;
					j--;
				}
			}
			if (check == false) {
				ans++;
			}


		}
	cout << ans << '\n';
	return 0;

}
