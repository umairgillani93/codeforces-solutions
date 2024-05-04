#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 1;
	for (int i = 0; i < 10; i++) {
		int res = 1 << n;
		n += 2;
		cout << res << '\n';
	}

	return 0;
}

