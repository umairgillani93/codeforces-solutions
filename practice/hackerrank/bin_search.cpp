#include <bits/stdc++.h>

using namespace std;

int Binary(vector<int> &arr, int x) {
	int i = 0;
	int j = arr.size() - 1;
	while (i < j) {
		int mid = i + (j - i) / 2;
		if (arr[mid] == x) {
			return mid;
		}
		else if (x < arr[mid]) {
			j = mid - 1;
		}
		else {
			i = mid + 1;
		}
	}
	return arr[i];
}

int main() {
	vector<int> a = {0, 1, 2, 3, 4};
	vector<int> b = {0, 4};

	for (int i = 0; i < a.size(); i++) {
		int res = Binary(b, a[i]);
		cout << res << '\n';
		}
	return 0;
}
