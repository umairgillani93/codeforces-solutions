#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<vector<char>> arr(n, vector<char>(n));
		vector<vector<char>> shift(n, vector<char>(n));
		for (int i = 0; i < arr.size(); i++) {
			for (int j = 0; j < arr[i].size(); j++) {
				cin >> arr[i][j];
			}
		}

		auto Rotate = [&](vector<vector<char>> &a) {
			vector<vector<char>> shifted;
			for (int i = a.size() - 1; i >= 0; i--) {
				vector<char> inner;
				for (int j = 0; j < a.size(); j++) {
					inner.push_back(a[i][j]);	
				}
				shifted.push_back(inner);
			}
			return shifted;
		};

		auto shifted = Rotate(arr);
		//for (int i = 0; i < shifted.size(); i++) {
		//	for (int j = 0; j < shifted[i].size(); j++) {
		//		cout << shifted[i][j] << " ";
		//	}
		//	cout << '\n';
		//}


		auto Change = [&](vector<vector<char>> &a, vector<vector<char>> &b) {
			int ans = 0;
			for (int i = 0; i < a.size(); i++) {
				for (int j = 0; j < a[i].size(); j++) {
					if (a[i][j] != b[i][j]) {
						cout << a[i][j] << " " << b[i][j] << '\n';
						cout << i << " " << j << '\n';
						a[i][j] = b[i][j];
						ans++;
					}
				}
			}
			return ans;
		};

		auto ans = Change(arr, shifted);
		cout << ans << '\n';
	}

	
	return 0;
}
