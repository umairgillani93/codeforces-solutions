#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	// finding binomial coefficients using factorial
	
	auto fact = [&](int x) {
		int fact = 1;
		if (x == 0 || x == 1) {
			return fact;
		}
		else {
			for (int i = 1; i <= x; i++) {
				fact *= i;
			}	
		}
		return fact;
	};
	
	cout << fact(n) / (fact(k) * fact(n - k)) << '\n';
	return 0;
	

}
