#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> x(n - 1);
		for (int i = 0; i < n - 1; i++) {
			cin >> x[i];
		}
		vector<int> a;
		a.push_back(x[0] + 1);

		for (int i = 1; i < n; i++) {
			a.push_back(x[i] + a[i - 1]);
		}


		for (auto c: a) {
			cout << c << " ";
		}
		cout << '\n';
	}
	

	// now we have a1 and x2
	// we need to calculte a2 from here
	// which can be calculated by the equation
	// x2 = a2 % a1

	return 0;
}
