#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combs() {
	vector<vector<int>> V;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n) {
				vector<int> v;
				v.push_back(i);
				v.push_back(j);
			}
			else {
				continue;
			}
		}
		V.push_back(v);
			
	}	

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << '\n';
	}
	return V;
	

}

