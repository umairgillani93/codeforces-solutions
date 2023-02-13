#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	for (int i = 0; i < tt; i++) {
		pair<int, int> p;
		int n, m;
		cin >> n >>  m;
		p.first = n;
		p.second = m;

		vector<int> ns;
		vector<int> ms;

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			ns.push_back(x);
		}

		for (int i = 0; i < m; i++) {
			int y;
			cin >> y;
			ms.push_back(y);
		}

		int max_num = max(ns.size(), ms.size());
		sort(ms.begin(), ms.end(), greater<int>());
		sort(ns.begin(), ns.end());
		vector<int> new_ns;
		vector<int> new_ms;

		for (auto it = ns.begin(); it != ns.end(); it++) {
			new_ns.push_back(*it);
		}

		for (auto it = ms.begin(); it != ms.end(); it++) {
			new_ms.push_back(*it);
		}

		int sum = 0;
		for (int i = 0; i < max_num; i++) {
			if (new_ms[i] > new_ns[i]) {
				sum += new_ms[i];
			}
			else {
				sum += new_ns[i];
			}
		}
		cout << sum << '\n';

		return 0;
}
}
