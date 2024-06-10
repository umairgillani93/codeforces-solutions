#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		vector<int> arr;
		arr.push_back(a);
		arr.push_back(b);
		arr.push_back(c);
		sort(arr.begin(), arr.end());
		if (a == b == c) {
			cout << "YES" << '\n';
		}
		else {
			if (b % a == 0 && c % a == 0 && ((b / a - 1) + (c / a - 1) <= 3)) {
				cout << "YES" << '\n';
			}
			else {
				cout << "NO" << '\n';
			}
		}
	}

	return 0;
}
