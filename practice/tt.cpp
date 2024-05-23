#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < a.size() - 1; i++) {
		int first = a[0];
		a.erase(a.begin() + 0);
		a.push_back(first);
		for (auto &c :a) {
			cout << c << " ";
		}
		cout << '\n';
	}
	return 0;

}
