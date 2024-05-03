#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	auto is_prime = [&](int n) {
		if (n == 1 || n == 2) {
			return true;
		}
		else {
			for (int i = 2; i < n - 1; i++) {
				if (n % i  == 0) {
					return false;
				}
				else {continue;}
			}
		}
		return true;

	};

	for (int i = 2; i < n; i++) {
		if (is_prime(i) && (n % i == 0)) {
			cout << i << " ";
		}
	}
	cout << '\n';


	return 0;
}
