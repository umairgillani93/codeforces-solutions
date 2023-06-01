#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n;
	cin >> n;
	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	if (v[0] % 2 != 0) {
		cout << "YES" << '\n';
	}

	else {
		for (int i = 0; i < n; i++) {
			if (v[i] % 2 == 0) {
				continue;
			}

			else {
				cout << "NO" << '\n';
				return;
			}
		}
		cout << "YES" << '\n';
	}

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	return 0;
}


