#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	cin >> n;
	auto check = [&](int base, long long exp) {
		base %= 100;
		long long res = 1;
		while (exp > 0) {
			if (exp & 1) {
				res = (res * base) % 100;
			}
			exp >>= 1;
			base = (base * base) % 100;
		}
		return res;
	};
	auto c = check(5, n);
	cout << c << '\n';
	return 0;
}
