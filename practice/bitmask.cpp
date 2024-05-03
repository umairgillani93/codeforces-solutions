// learn bitmasking concepts in this code file
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 10;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	for (int mask = 0; mask < (1 << n); ++mask) {
		int curr_sum = 0;
		int idx = 0;

		for (int j = 0; j < n; j++) {
			if (1 & (1 << j)) {
				curr_sum += nums[j];
				idx = j;
			}
		}

		if (curr_sum == sum) {
			cout << idx << '\n';
			return 0;
		}

	}

	return 0;
}
