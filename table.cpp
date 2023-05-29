#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n, k;
	cin >> n >> k;
	vector<int> vals;
	for (auto i = 0; i < n * k; i++) {
		cin >> vals[i];
	}

	for (auto i: vals) {
		cout << i << " ";
	}
	cout << '\n';
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	return 0;
	
}
