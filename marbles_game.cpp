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
		unordered_map<int, int> freq;
		for (int i = 0; i < n; i++) {
			freq[a[i]]++;
		}

		set<int> s;
		for (int i = 0; i < n; i++) {
			if (freq[a[i]] > 1) {
				s.insert(a[i]);
			}
		}
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (freq[a[i]] == 1) {
				count++;
			}
		}
		int ans = (count / 2 + count % 2) * 2 + s.size();
		cout << ans << '\n';
	}
	return 0;
}
