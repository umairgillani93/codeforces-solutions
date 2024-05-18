#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> arr(n, vector<char>(m));
	for (int i = 0; i < n; i++ ) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	if ((arr[0][0] == arr[0][m - 1]) || (arr[0][0] == arr[0][m - 1]) || (arr[n - 1][0] == arr[n - 1][m - 1]) || (arr[0][m - 1] == arr[n - 1][m - 1])) {
		cout << "YES" << '\n';
	}
	else {
		cout << "TBI" << '\n';
	}


	// for (int i = 0; i < arr.size(); i++) {
	// 	for (int j = 0;  j < arr[i].size(); j++) {
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << '\n';
	// }
	return 0;

}	
