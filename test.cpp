#include <bits/stdc++.h>
using namespace std;


int main() {
	vector<int> v{1,2,3,4,5};
	vector<int> new_v;

	sort(v.begin(), v.end(), greater<int>());

	for (auto it = v.begin(); it != v.end(); it++) {
		new_v.push_back(*it);
	}

	for (int i = 0; i < new_v.size(); i++) {
		cout << new_v[i] << '\n';
	}

	return 0;

}

