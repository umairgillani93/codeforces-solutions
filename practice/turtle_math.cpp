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
		int64_t sum  = accumulate(a.begin(), a.end(), 0);
		if (sum % 3 == 0) {
			cout << 0 << '\n';
		}
		else if (sum % 3 == 2) {
			cout << 1 << '\n';
		}
		else {
			bool check = true;
			for (int i = 0; i < n; i++) {
				if ((sum - a[i]) % 3 == 0) {
					cout << 1 << '\n';
					check = false;
					break;
				}
			}
			if (check == true) {
				cout << 2 << '\n';
			}
		}
	}

	return 0;
}
