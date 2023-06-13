#include <bits/stdc++.h>

using namespace std;


void f(vector<int> v, int q) {
	int j = v.size() - 1;
	
	while (j >= 0) {
		if (v[j] <= q) {
			cout << v[j] << '\n';
			return;
		}

		else {
			j--;
		}
	}
}

int main() {
	vector<int> v {1, 2, 3, 4, 5};
	int q = 4;
	f(v, q);
	return 0;
}
