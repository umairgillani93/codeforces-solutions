#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	int curr_sum = 0;
	int best_sum = 0;

	for (int i = 0; i < n; i++) {
		curr_sum += arr[i];

		if (curr_sum >= best_sum) {
			best_sum = max(curr_sum, best_sum);
		}

		else {
			curr_sum = 0;
		}
		
	}

	cout << best_sum << '\n';
	return 0;

}	
