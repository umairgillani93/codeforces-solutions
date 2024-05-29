#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			b[i] = -1 * b[i];
		}
	}
	auto Prefix = [&](vector<int> &b) {
		int n = b.size();
		vector<long long> pref(n);
		if (n == 0) return pref;
		
		pref[0] = b[0];
		for (int i = 1; i < n; i++) {
			pref[i] = pref[i - 1] + b[i];
		}
		return pref;
	};
	auto P = Prefix(b);
	for (int i = 0; i < P.size(); i++) {
		cout << P[i] << " ";
	}
	cout << '\n';
	return 0;
	
}
