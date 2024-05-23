#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 1 || n % 2 != 0) {
			cout << "NO" << '\n';
		}
		else {
			bool A = true;
			string s = "";
			for (int i = 0; i < n / 2; i++) {
				if (A) {
					s += "AA";
				}
				else {
					s += "BB";
				}
				A = !A;
			}
			cout << "YES" << '\n';
			cout << s  << '\n';
		}
	}
	return 0;
}

