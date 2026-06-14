#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> a(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
				cin >> a[i][j];
		}
	}

	int best = 0;
	for (int r = 0; r < n - 2; r++) {
		for (int c = 0; c < n - 2; c++) {

			int sum = 0;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (i == 1 && (j == 0 || j == 2)) continue;
					sum += a[r + i][c + j];
				}
			}
			best = max(best, sum);
		}
	}
	cout << best << '\n';
	return 0;


}
