#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.erase(v.begin());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}

	return 0;
}

