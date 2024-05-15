#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		auto m = *min_element(arr.begin(), arr.end());
		vector<int> new_arr;
		for (int i = 0; i < arr.size(); i++) {
			arr[i] = arr[i] - m;
			if (arr[i] > 0) {
				new_arr.push_back(arr[i]);
			}
		}
		arr = new_arr;
	}
	return 0;
}
