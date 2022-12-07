#include <bits/stdc++.h>
using namespace std;

vector<int> squres(vector<int> v) {
	vector<int> t;
	for (int i = 0; i < v.size(); i++) {
		if (i % 2 != 0) {
			t.push_back(v[i] * v[i]);
		}
		else
			t.push_back(v[i]);
	}

	return t;
}

int main() {
	vector<int> newv;
	newv.push_back(0);
	newv.push_back(1);
	newv.push_back(2);
	newv.push_back(3);

	vector<int> s = squres(newv);
	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}
}
