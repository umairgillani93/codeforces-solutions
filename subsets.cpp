#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> outer;
	for (int mask = 0; mask < (1 << n); mask++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				subset.push_back(i);
			}
		}
		outer.push_back(subset);
	}

	for (int i = 0; i < outer.size(); i++) {
		for (int j = 0; j < outer[i].size(); j++) {
			cout << outer[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}


