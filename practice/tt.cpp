#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> arr = {1,2,3,4,-4,5,-6,0,1};
	int curr_sum = 0;
	int best_sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		curr_sum = max(curr_sum + arr[i], arr[i]);
		best_sum = max(curr_sum, best_sum);
	}
	cout << best_sum << '\n';
	return 0;
}
