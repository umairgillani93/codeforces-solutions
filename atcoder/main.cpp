#include <bits/stdc++.h>

using namespace std;

int Super(int n) {
	// recusion: funtions calls itself again and again
	// unless base case is reached
	// when base case reached, function terminates and returns the results
	
	// base case:
	if (n < 10) {
		return n;
	}
	
	else {
		int sum = 0;
		while (n > 0) {
			sum += n % 10;
			n /= 10;
			cout << "sum: " << sum << '\n';
			cout << "N : " << n << '\n';
		}
		return Super(sum); 
	}
}

int main() {
	int n;
	cin >> n;
	int res = Super(n);
	cout << res << '\n';
	return 0;
}
