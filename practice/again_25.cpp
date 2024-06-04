#include <bits/stdc++.h>

using namespace std;

int calculate(int base, long long exp) {
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
}

int main() {
	long long n;
	cin >> n;
	cout << calculate(5, n) << '\n';
	
	return 0;
	
}
