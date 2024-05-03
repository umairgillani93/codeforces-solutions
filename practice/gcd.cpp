#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	auto Gcd = [&](int a, int b) {
		int res = min(a, b);
		while (res > 0) {
			if (a % res == 0 && b % res == 0) {
				break;
			}
			res--;
		}
		return res;
	};
	
	auto r = Gcd(a, b);
	cout << r << '\n';
	return 0;
}
