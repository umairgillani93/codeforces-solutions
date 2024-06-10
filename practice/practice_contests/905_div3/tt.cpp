#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//for (auto &c : arr) {
	//	cout << c << " ";
	//}
	int min_diff = INT_MAX;
	for (int i = 0; i < n; i++) {
		int res = ceil(arr[i] / static_cast<double>(k)) * k;
		int diff = res - arr[i];
		min_diff = min(min_diff, diff);
	}
	cout << min_diff << '\n';
	return 0;
}
