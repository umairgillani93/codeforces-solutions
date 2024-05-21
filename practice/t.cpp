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
		int mx_ele = *max_element(arr.begin() + 1, arr.end() - 1);
		if (arr[0] >= mx_ele || arr[n - 1] >= mx_ele) {
			cout << "NO" << '\n';
			continue;
		}
		else {
			auto Max = [&](vector<int> &arr) {
				int mx_i = 1;
				int mx = arr[1];
				for (int i = 02 i < arr.size() - 1; i++) {
					if (arr[i] >= mx) {
						mx_i = i;
						mx = arr[i];
					}
				}
				return mx_i + 1; 
			};

			auto AllZero = [&](vector<int> &arr) {
				for (int i = 0; i < arr.size(); i++) {
					if (arr[i] != 0) {
						return false;
					}
				}
				return true;
			};
			bool done = false;
			while (!done) {
				auto mx_i = Max(arr);
				arr[mx_i] -= 2;
				arr[mx_i - 1]--;
				arr[mx_i + 1]--;
				if (arr[mx_i] < 0 || arr[mx_i + 1] < 0 || arr[mx_i - 1] < 0) {
					cout << "NO" << '\n';
				}
				else {
					auto zero_check = AllZeros(arr);
					if (zero_check) {

					}
				}
			}
		
		}
	}
	return 0;
}
