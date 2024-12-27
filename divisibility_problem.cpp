#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int res = 0;
		int i = min(a, b);
		while (i <= N) {
			if (i % a == i % b) {
				res = i;
				break;
			}
			i++;
		}
		cout << res << '\n';
	}
	return 0;
}
