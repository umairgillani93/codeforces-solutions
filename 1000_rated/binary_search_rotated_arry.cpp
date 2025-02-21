// search element in rotated sorted array
#include <bits/stdc++.h>

using namespace std;

int f(vector<int> &arr, int x) {
	int lo = 0;
	int hi = arr.size() - 1;

	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		// determin which half is sorted
		if (arr[mid] == x) {
			return mid;
		}
		else if (arr[lo] <= arr[mid]) {
			if (arr[lo] <= x && x < arr[mid]) {
				hi = mid - 1;
			}
			else {
				lo = mid + 1;
			}
		}
		else {
			if (arr[mid] <= x && x < arr[hi]) {
				lo = mid + 1;
			}
			else {
				hi = mid - 1;
			}
			
		}
	}
	return -1;
}

int main() {
	vector<int> arr = {30, 40, 50, 10, 20};
	int x = 70;
	int res = f(arr, x);
	cout << res << '\n';
	return 0;
}
