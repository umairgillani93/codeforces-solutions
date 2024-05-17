#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		// condition: a[i] <= b[i];
		// second line: vector 'a'
		// third line: vector 'b'
		vector<int> a(n);
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		int mark = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] > b[j]) {
				mark++;
				int w = b[j];
				a.push_back(w);
				sort(a.begin(), a.end());
				a.pop_back();
			}	

		}
		cout << mark << '\n';
		//for (auto &k : a) {
		//	cout << k << " ";
		//}
		//cout << '\n';
	}
	return 0;
}
