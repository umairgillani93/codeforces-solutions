// rotations in rotated sorted array
#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> arr = {30, 40, 50, 10, 20};
	int lo = 0;
	int hi = arr.size() - 1;

	int ans = -1;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		if (arr[mid] > arr[hi]) {
			lo = mid + 1;
		}
		else {
			ans = mid;
			hi = mid;
		}
	}
	cout << ans << '\n';
	return 0;
	
}
