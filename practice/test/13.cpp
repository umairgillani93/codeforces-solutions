#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int rounds = 1;
	vector<int> a(n);
	vector<int> pos(n + 1, 0);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
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
