#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, m;
	cin >> n >> m;
	int rounds = 1;
	vector<int> a(n);
	vector<pair<int, int>> ops(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < m; j++) {
		int x, y;
		cin >> x >> y;
		pair<int, int> p;
		p.first = x;
		p.second = y;
	}

	for (int i = 0; i <  m; i++) {
		int f = ops[i].first;
		int s = ops[i].second;
		swap(a[f + 1], a[s + 1]);
		vector<int> pos(n + 1, 0);
		for (int i = 0; i < pos.size(); i++) {
			pos[a[i]] = i;
		}

		for (int i = 0; i < pos.size() - 1; i++) {
			if (pos[i + 1] < pos[i]) rounds++;
		}
		cout << rounds << '\n';
	}

	return 0;
}
