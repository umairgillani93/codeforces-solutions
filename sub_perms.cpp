#include <bits/stdc++.h>

using namespace std;

void sol() {
	// A = [1, 2, 3]
	// if abs(1 - 3) > 1
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	//if (abs(v[0] - v[1]) > 1) {
	//	cout << 1 << " " << 1 << '\n';
	//	return;
	//}

	for (int i = 1; i <= v.size(); i++) {
		for (int j = 2; j <= v.size(); j++) {
			if (abs(v[i] - v[j]) > 1) {
				cout << i + 1 << " " << j << '\n';
				break;
			}
		}

		break;
	}

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}

	return 0;
}
