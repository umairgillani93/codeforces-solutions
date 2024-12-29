#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << '\n';
		if (a[i] == 0) {
			a.pop_back();
		}
		else {
			break;
		}
	}

	
	reverse(a.begin(), a.end());


	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == 0) {
			a.pop_back();
		}
		else {
			break;
		}
	}

	//if (a.empty()) {
	//	cout << 0 << '\n';
	//}
	bool zeros = false;
	for (auto x: a) {
		zeros |= x;
	}
	//if (zeros) {
	//	cout << 2 << '\n';
	//}
	//else {
	//	cout << 1 << '\n';
	//}

	return 0;
}
