#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> b({a[n - 1]});
	for (auto &c: b) {
		cout << c << " ";
	}
	cout << '\n';
	return 0;
}
