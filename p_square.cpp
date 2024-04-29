#include <bits/stdc++.h>

using namespace std;

int main() {
	//int n, first, c, d;
	//cin >> n >> first >> c >> d;
	vector<vector<int>> arr(3, vector<int>(3, 1));
	
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;

}
