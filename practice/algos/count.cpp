#include <bits/stdc++.h>

using namespace std;

int main() {
	/*
	 * To COUNT THE NUMBER(X) values where n + x == n ^ x
	 * this is a classical bit-manipulations related problem
	 * the ideas is to calculate the number of unset bits for both n and x
	 * means if n = 5 and x = 2 we need to check how many indices both the bits of x and n are not set i.e not 1
	 * and then we simpley will return 2 ^ number of unset bits to be our answer
	 *
	 * Example n = 5 = 0101 (binary)
	 *         x = 4 = 0100 (binary)
	 *         now if we check from LSB to MSB left to right
	 *         we have 1 and 0 summing them gives 1
	 *         next we have 0 and 0 summing them will give us 0
	 *         next we have 1 and 1 summing them will give us 1 but XORING 1 ^ 1 will give us 0
	 *         which shows that if the bits of both 'n' and 'x' are set the condition N ^ X == N + X doesn't hold
	 *         and hence we won't count it
	 *         let's code it now
	 */

	// read the integer
	int n;
	cin >> n;

	// initilize unset bits count to 0
	int unset = 0;
	
	// loop until n is greater than zero
	while (n) {
		// check if 'ith' bit of is set by ANDING with 1
		if ((n & 1) == 0) {
			// if it's set raise the count
			unset++;
		}
		// else move one bit closer to LSB
		n >>= 1;
	}
	int res = 1 << unset;
	cout << res << '\n';
	return 0;
}


