#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> ns;
		vector<int> ms;
		for (int i = 1; i <= n; i++) {
			ns.push_back(i);
		}
		for(int i = 1; i <= m; i++) {
			ms.push_back(i);
		}

		int diff = 0;
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (ns[i - diff] > ms[i]) {
				ans++;
				diff++;
			}

		}
		cout << ans << '\n';
	}
	return 0;

}
