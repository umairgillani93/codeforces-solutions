#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> arr = {7, 12};
	sort(arr.begin(), arr.end());
	int min_diff = INT_MAX;
	for (int i = 0; i < arr.size(); i++) {
		int curr_diff = abs(4 - arr[i] % 4);
		min_diff = min(min_diff, curr_diff);
	}
	cout << min_diff << '\n';
	return 0;

}
