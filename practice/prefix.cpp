#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	auto Pref = [&](vector<int> &arr) {
		int n = arr.size();
		vector<int> p(n, 0);
		p[0] = arr[0];
		for (int i = 0; i < n; i++) {
			p[i] = p[i - 1] + a[i];
		}	
		return p;
	};
	auto pref = Pref(a);
	for (auto &c: pref) {
		cout << c << " " ;
	}
	cout << '\n';
	return 0;
}
