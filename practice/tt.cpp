#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		auto Sum = [&](int N, int x) {
			// first find the largest multiple of x below N
			// example N = 11 and x = 5
			// p = (11 - 1) / 3 = 9 (integer division removes the decimal part)
			long long p = (N - 1) / x;
			// calculate the sum of all the integers till N that are mutiples of x using 
			// arithimatic formua
			return x * p * (p + 1) / 2;
		};
		// calculate for N = 3
		long long sum_three = Sum(N, 3);
		// calculate for N = 5;
		long long sum_five = Sum(N, 5);
		// calcualte for N = 15, since we need substract the 15 multiples sum
		// to avod summing up again
		long long sum_fifteen = Sum(N, 15);
		cout << sum_three + sum_five - sum_fifteen << '\n';
	}
	return 0;
}
