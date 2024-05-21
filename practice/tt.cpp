#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	auto Max = [&](vector<int> &arr) {
		int mx_i = 1;
		int mx = arr[1];
		for (int i = 2; i < arr.size() - 1; i++) {
			if (arr[i] > mx) {
				mx_i = i;
				mx = arr[i];
			}
		}
		return mx_i;
	};
	auto mx = Max(arr);
	cout << mx << '\n';
	return 0;
}
	
