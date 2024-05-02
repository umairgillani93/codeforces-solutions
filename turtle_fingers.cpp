#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int a, b, l;
		int C = 1e6;
		cin >> a >> b >> l;
		vector<int> xs;
		vector<int> ys;

		for (int i = 0; i <= C ; i++) {
			if (pow(a, i) <= l) {
				xs.push_back(i);
			}
			else {break;};
		}

		for (int i = 0; i <= C ; i++) {
			if (pow(b, i) <= l) {
				ys.push_back(i);
			}
			else {break;};
		}

		// for (auto c: xs) {
		// 	cout << c << " ";
		// }
		// cout << '\n';
		// for (auto k: ys) {
		// 	cout << k << " ";
		// }

		int ans = 0;
		for (int i = 0; i < xs.size(); i++) {
			for (int j = 0; j < ys.size(); j++) {
				int k = l / (pow(a, xs[i]) * pow(b, ys[j]));
				if (k * pow(a, xs[i]) * pow(b, ys[j]) == l) {
					// cout << "k: " << k << " x: " << xs[i] << " y: " << ys[j] << '\n';
					ans++;
				}
				else {continue;}
			}
		}

		cout << ans << '\n';
	}

	return 0;

}	
