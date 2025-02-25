#include <bits/stdc++.h>

using namespace std;

int main() {
	// subarray with sum zero
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long s = 0;
	set<int> pref;
	bool found = false;
	for (int i = 0; i < n; i++) {
		s += a[i];
		if (pref.find(s) != pref.end()) {
			found = true;
			break;
		}
		pref.insert(s);
	}

	if (found) {
		cout << "yes" << '\n';
	}
	else {
		cout << "no" << '\n';
	}
	return 0;
}
	

	
