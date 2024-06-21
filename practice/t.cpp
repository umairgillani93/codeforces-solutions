#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int res = 1;
	while (res < n) {
		res <<= 1;
	}
	cout << res << '\n';
	return 0;
}
