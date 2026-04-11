#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> a(n);
		int l = -1;
		for (int i = 0; i < n; i++) {
			// [1,2,3,4,5] for n =5;
			// [0,1,2,3,4] for indices
			cin >> a[i];
			if (a[i] != i + 1 && l == -1) {
				l = i;
			}
		}
		if (l != -1) {
			int r = min_element(a.begin() +l, a.end()) - a.begin();	
			reverse(a.begin() + l, a.begin() + r + 1);
		}

		for (auto &c: a) {
			cout << c << " ";
		}
		cout << '\n';
	}

	return 0;
}	

