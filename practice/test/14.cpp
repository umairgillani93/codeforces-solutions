#include <bits/stdc++.h>
using namespace std;

void swap(int x, int y) {
	int z = x;
	x = y;
	y = z;
}
 
int main() {
	int n, m;
	cin >> n >> m;
	int rounds = 1;
	vector<int> a(n);
	vector<pair<int, int>> operations(m);
	vector<int> pos(n + 1, 0);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < m; j++) {
		pair<int, int> p;
		int x, y;
		cin >> x >> y;
		p.first = x;
		p.second = y;
		operations.push_back(p);
	}

	for (int i = 0; i < m; i++) {
		int f = operations[i].first;
		int s = operations[i].second;
		swap(a[f], a[s]);
	}

	for (int i = 0; i < pos.size(); i++) {
		pos[a[i]] = i;
	}

	for (int i = 0; i < pos.size() - 1; i++) {
		if (pos[i + 1] < pos[i]) ans++;
	}
	cout << ans << '\n';
	return 0;
}
