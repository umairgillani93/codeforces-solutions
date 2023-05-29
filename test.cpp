#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);

	v.erase(v.begin() + v.size() - 1);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << '\n';
	return 0;
}
