#include <bits/stdc++.h>
using namespace std;

int luckBalance(int k, vector<vector<int>> arr) {
	int n = arr.size();
	vector<int> imp;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		int luck = arr[i][0];
		int type = arr[i][1];

		if (type == 0) sum += luck;
		else imp.push_back(luck);
	}

	sort(imp.rbegin(), imp.rend());

	for (int i = 0; i < imp.size(); i++) {
		if (i < k) sum += imp[i];
		else sum -= imp[i];
	}
	return sum;
}



int main() {
	vector<vector<int>> contests = {{5, 1}, {2, 1}, {1, 1}, {8, 1}, {10, 0}, {5, 0}};
	int k = 3;
	int res = luckBalance(k, contests);
	cout << res << '\n';
	return 0;
}
