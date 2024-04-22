#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	s += " ";
	vector<pair<int, int>> res;

	for (int i = 0; i < s.size(); i++) {
		res.emplace_back(i, i);
	}

	sort(res.begin(), res.end(), [&](const pair<int, int> &p1, const pair<int, int> &p2) {
			return s.substr(p1.first) < s.substr(p2.first);
			});

	for (auto &p: res) {
		cout << p.first << " ";
	}
	return 0;
}

