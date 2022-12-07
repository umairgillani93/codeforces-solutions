#include <bits/stdc++.h>
using namespace std;

vector<int> fn(vector<int> v) {
	vector<int> t;
	for (int i = 0; i < v.size(); i++) {
		t.push_back(v[i] + 1);
	}

	return t;
}

int main() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	vector<int> vt = fn(v1);

	for (int i = 0; i < vt.size(); i++) {
		cout << vt[i] << '\n';
	}

}
