#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> pref_sum;
	for (int i = 1; i <= arr.size(); i++) {
		pref_sum.push_back(i * (i + 1) / 2);
	}
	for (auto &c: pref_sum) {
		cout << c << " ";
	}
	cout << '\n';
	return 0;
}
