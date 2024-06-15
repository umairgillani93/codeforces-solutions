#include <bits/stdc++.h>

using namespace std;

bool check(int x) {
	int cnt = 0;
	while (x > 0) {
		if (1 & x) {
			cnt++;
			if (cnt == 2) {
				return false;
			}
		}
		x >>= 1;
	}
	return true;
}

bool isPower(int x) {
	return x && (!(x & (x - 1)));
}

int main() {
	int x;
	cin >> x;
	// The assumption is if an integer is represented as power of 2
	// their should be only 1 bit that is going to be set in it's binary notation
	//
	// Example: n = 16;
	//          2 ^ 4 * 1 + 2 ^ 3 * 0 + 2 ^ 2 * 0 + 2 ^ 1 * 0 + 2 ^ 1 * 0
	//          1 + 0 + 0 + 0 + 0
	//          10000(base-2)
	//          as it's clear that their's only 1-bit that is set the most significant bit
	
	bool res = check(x);
	cout << isPower(x) << '\n';
	return 0;
}
