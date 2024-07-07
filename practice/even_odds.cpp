#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	long long t = 0;
	if (n & 1) {
		t = n / 2 + 1;
	}
	else {
		t = n / 2;
	}
	//cout << "t: " << t << " k: " << k << '\n';

	if (k <= t) {
		cout << k + k - 1 << '\n';
	}
	else {
		cout << (k - t) * 2 << '\n';
	}
	return 0;

}
