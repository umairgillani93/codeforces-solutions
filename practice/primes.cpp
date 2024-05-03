#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n; // check if n is prime using lambda function
	
	auto IsP= [](int n) {
		for (int i = 2; i < n - 1; i++) {
			if (n % i == 0) {
				return false;
			}
			else {continue;}
		}
		return true;
	};
	auto is_prime = IsP(n);
	cout << is_prime << '\n';
	return 0;

}
