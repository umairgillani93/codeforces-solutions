#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr = {7, 9, 11, 13, 120};

	auto l = lower_bound(arr.begin(), arr.end(), n);
	auto u = upper_bound(arr.begin(), arr.end(), n);
	auto e = equal_range(arr.begin(), arr.end(), n);
	
	cout << *l << '\n';
	cout << *u << '\n';
	cout << e.first << ":" << e.second << '\n';

	return 0;

}
