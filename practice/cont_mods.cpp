#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		set<int> st(a.begin(), a.end());
		if (st.size() == n) {
			cout << "YES" << '\n';
			continue;
		}

		bool check = false;
		int mod = a[0];
		for (int i = 1; i < n - 1; i++) {
			if (a[i] % a[i + 1] == 0) {
				cout << "NO" << '\n';
				check = true;
				break;
			}
			else {
				mod = a[i] % a[i + 1];
			}
		}
		if (check == false) {
			cout << "YES" << '\n';
		}
	}
	return 0;
}
