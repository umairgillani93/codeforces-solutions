#include <bits/stdc++.h>
using namespace std;

vector<int> squares(vector<int> vector) {

	vector<int> new_vector;
	for (int i = 0; i < vector.size(); i++) {
		new_vector.push_back(vector[i] * vector[i]);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << new_vector[i] << '\n';
	}
	return new_vector;
		
}

int main() {
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	squares();
	return 0;
}
