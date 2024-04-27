#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < (1 << n); i++) {
		int res = 0;
		vector<int> ss;
		for (int j = 0; j < n; j++) {
			res = i & 1 << j;
			cout << res << '\n';
		}
	}
	return 0;
}
