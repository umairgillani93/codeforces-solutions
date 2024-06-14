#include <bits/stdc++.h>

using namespace std;

int main() {
	// compute XOR till nth number;
	int n;
	cin >> n;
	if (n % 4 == 0) {
		cout << n << '\n';
	}
	else if (n % 4 == 1) {
		cout << 1 << '\n';
	}
	else if (n % 4 == 2) {
		cout << n + 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}
	return 0;
}
