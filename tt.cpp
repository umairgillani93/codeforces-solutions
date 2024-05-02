#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> low;
		vector<int> high;
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			low.push_back(i);
		}
		
		for (int i = 1; i <= m; i++) {
			high.push_back(i);
		}

		for (int i = 0; i < n; i++) {
			if (low[i] >= high[i]) {
				ans++;
			}
		}
		cout << ans << '\n';


		// auto Max = [&](int x, int y) {
		// 	if (n >= m) {
		// 		return n;
		// 	}
		// 	else {return m;};
		// };

		// auto Min = [&](int x, int y) {
		// 	if (n <= m) {
		// 		return n;
		// 	}
		// 	else {return m;}
		// };
		// 
		// auto g = Max(n, m);
		// auto l = Min(n, m);
		// vector<int> low(l);
		// vector<int> high(g);
		// int ans = 0;

		// for (int i = 1; i <= l; i++) {
		// 	low.push_back(i);
		// }

		// for (int j = 1; j <= g; j++) {
		// 	high.push_back(j);
		// }

		// for (int i = 0; i < low.size(); i++) {
		// 	if (low[i] >= high[i]) {
		// 		ans++;
		// 	}
		// 	else {break;}

		// }
	}

	return 0;

}
