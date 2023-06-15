#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v {0, 3, -2, 5, -4, -4};
	int q = 3;

	int c = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= q) {
			c++;
		}

		else {
			
			c = 0;
		}
	}

	cout << "final c is: " << c << '\n';
	return 0;

}


