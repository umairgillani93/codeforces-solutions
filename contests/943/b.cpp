#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string a;
		cin >> a;
		string b;
		cin >> b;

		int i = 0;
		int j = 0;
		int ans = 0;
		while (i < a.size() && j < b.size()) {
			if (a[i] == b[j]) {
				// cout << a[i] << " " << b[j] << '\n';
				ans++;
				i++;
				j++;
			}
			else {j++;}
		}
		cout << ans << '\n';
	}
	return 0;
}

