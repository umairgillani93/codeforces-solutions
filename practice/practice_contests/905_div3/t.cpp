#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> arr = {5,10};
	int k = 4;
	int min_diff = INT_MAX;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] % 2 == 0) {
			continue;
		}
		else {
			int res = ceil(arr[i] / 4.0) * 4;
			int diff = res - arr[i];
			min_diff = min(min_diff, diff);
		}
	}
	cout << min_diff << '\n';
	return 0;
}
