#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(26, 0);
	string b = "aaaaa";
	int dist = 0;
	int ans = 0;
	for (auto &c: b) {
		dist += a[c - 'a']++ == 0;
		ans += dist;
	}
	cout << ans << '\n';
	return 0;
}

