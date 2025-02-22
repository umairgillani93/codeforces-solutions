// equlibrium position
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> pref(n);
	pref[0] = a[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] + a[i];
	}

	for (int mid = 0; mid < pref.size(); mid++) {
		if (mid == 0) continue;
		if (pref[mid - 1] == pref[n - 1] - pref[mid]) {
			cout << mid << '\n';
			break;
		}
	}
	return 0;
}
