#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int ans = 0;
	int mark = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if ((i + j) % (j * gcd(i, j)) == 0) {
				ans++;
				if (i < j) {
					j = mark;
					break;
				}

			}
		}
		
		if (i < mark) {
			break;
		}

	}
	cout << ans << '\n';
	return 0;
}
