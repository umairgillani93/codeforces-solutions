#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	random_shuffle(arr.begin(), arr.begin() + n);
	
	for (auto c: arr) {
		cout << c << '\n';
	}

	return 0;

}
