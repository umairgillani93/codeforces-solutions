#include <bits/stdc++.h>

using namespace std;

int Bc(int n, int k) {
	// define edge cases
	if (k == 0 || k == n) {
		return 1;
	}
	if (k > n) {
		return 0;
	}

	else {
		return Bc(n - 1, k - 1) + Bc(n - 1, k);
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	// auto Bc = [&](int n, int k) {
	// 	// binomial coefficients using recursive formule
	// 	// define the edge cases first 
	// 	// if k == 0 or k == n -> return 1;
	// 	// if k > n return 0;
	// 	if (k == 0 || k == n) {
	// 		return 1;
	// 	}

	// 	if (k > n) {
	// 		return 0;
	// 	}

	// 	else {
	// 		return Bc(n - 1, k - 1) + Bc(n - 1, k);
	// 	}
	// };

	int result = Bc(n, k);
	cout << result << '\n';
	return 0;
}
