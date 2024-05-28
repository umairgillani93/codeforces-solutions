#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	vector<int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}

	auto Max = [&](vector<int> &b; int x) {
		int i = 0;
		int j = b.size() - 1;
		while (i < j) {
			int mid = i + (j - i) / 2;
			if (b[mid] == x) {
				return x;
			}
		}
	}

	return 0;
}
