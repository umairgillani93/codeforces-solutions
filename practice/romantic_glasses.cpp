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
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				a[i] = -1 * a[i];
			}
		}

		auto Pref = [&](vector<int> &a) {
			int n = a.size();
			vector<long long > pref(n);
			if (n == 0) return pref;
			
			pref[0] = a[0];
			for (int i = 1; i < n; i++) {
				pref[i] = pref[i - 1] + a[i];
			}
			return pref;
		};
		auto P = Pref(a);
		unordered_map<int, int> mp;
		for (int i = 0; i < P.size(); i++) {
			mp[P[i]]++;
		}
		bool check = false;
		for (int i = 0; i < P.size(); i++) {
			if (P[i] == 0) {
				check = true;
				cout << "YES" << '\n';
				break;
			}
		}

		if (check == false) {
			bool ok = false;
			for (auto it = mp.begin(); it != mp.end(); it++) {
				if (it -> second >= 2) {
					cout << "YES" << '\n';
					ok = true;
					break;
				}
			}	
			if (ok == false) {
				cout << "NO" << '\n';
			}
		}
		
	}

	return 0;
}
