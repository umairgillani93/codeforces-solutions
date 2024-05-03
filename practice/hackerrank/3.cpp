#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> matrix(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}

	int left_sum = 0;
	int right_sum = 0;

	for (int i = 0; i < n; i++) {
		left_sum += matrix[i][i];
	}

	for (int i = 0; i < n; i++) {
		right_sum += matrix[i][n - 1 - i];
	}

	cout << abs(right_sum - left_sum) << '\n';
	return 0;

}
