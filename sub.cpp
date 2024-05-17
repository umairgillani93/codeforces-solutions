#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int mask = 0; mask < (1 << n); ++mask) {
		vector<int> subsets;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				subsets.push_back(i);
			}
		}
		for (auto &c: subsets) {
			cout << c << " ";
		}
		cout << '\n';
	}
	return 0;
}
