#include <bits/stdc++.h>

using namespace std;



int main() {
	vector<int> v {1, 2, 11, 4, 5};
	
	int q = 10;

	vector<vector<int>> output;
	vector<int> inner;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= q) {
			inner.push_back(v[i]);	
		}

		else {
			output.push_back(inner);
			inner.erase();
		}
	}

	for (int i = 0; i < output.size(); i++) {
		for (int j = 0; j < output[i].size(); j++) {
			cout << output[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}
