#include <bits/stdc++.h>

using namespace std;

void swap(int &x, int &y) {
	int z;
	z = x;
	x = y;
	y = z;
}

int main() {

	vector<int> arr = {1,4,2,3};
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			break;
		}
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}
