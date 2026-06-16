#include <bits/stdc++.h>
using namespace std;

int f(const vector<int> &arr) {
	int n = arr.size();
	vector<int> pos(n + 1, 0);
	for (int i = 0; i < n; i++) pos[arr[i]] = i;
	int ans = 1;
	for (int i = 0; i < n; i++) {
		if (pos[i + 1] < pos[i]) ans++;
	}
	return ans;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	vector<int> res;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		swap(a[x], a[y]);
		int r = f(a);
		r--;
		res.push_back(r);
	}
	for (auto &s: res) cout << s << '\n';
	return 0;
}
