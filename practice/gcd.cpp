#include <bits/stdc++.h>
/*
 * we have got 2 numbers a, b
 * we need find the greatest common divisor or highest common factor
 * a = 5, b = 10 the common divisor can't be > a 5 / 7
 * res = min(a, b)
 * res % a and res % b == 0 : res
 * res--;
 */
// a = 2, b = 3;
// res = min(a, b) -> 2
// if a % 2 == 0 && b % 2 == 0
// res--, res = 2
 

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
