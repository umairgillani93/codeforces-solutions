#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> new_v;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++) {
		new_v.push_back(abs(a[i] - b[i]));
	}

	for (auto &i: new_v) {
		cout << i << " ";
	}
	
	cout << '\n';
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	
	int t;
	cin >> t;
	while (t--) {
		sol();
	}

	return 0;
}


// rough work..
// A = [1, 3, 5, 3, 9]
// B = [2, 5, 11, 2, 4]
// k = 2
// |a1 - b1| <= k -> true
// |a2 - b2| <= k -> true
// A = [7, 7, 7]
// B = [9, 4, 8]
//







