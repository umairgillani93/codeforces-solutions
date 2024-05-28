#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 5;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	long long min = 0;
	long long max = 0;
	for (int i = 0; i < 4; i++) {
		min += arr[i];
	}
	for (int i = 1; i <= 4; i++) {
		max += arr[i];
	}
	cout << min << " " << max << '\n';
	return 0;
		
}
