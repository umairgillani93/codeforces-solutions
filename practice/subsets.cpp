#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	// generate subsets till n
	// for example if n = 3
	// the subsets are going to be {}, {1}, {2}, {3}, {1,2}, {2,3}, {1,2,3}
	// in total we'll be having 2^n - 1 number of subsets
	// incase of 3 -> 2^n - 1 = 8 - 1 = 7
	// like above in total we have 7 subsets for n = 3
	// we're going to generate subsets using bitwise operations
	
	// loop till 2^n
	for (int mask = 0; mask < (1 << n); mask++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			// lets' discuss what's happening here
			// mask goes to 2^n 
			// and i goes till n 
			// and we take bitwise end between mask and (1 << i) at each step 
			// if the result is true that is 1 
			// we are going to append this to our outer vector
			if (mask & (1 << i)) {
				subset.push_back(i);

			}
		}

		for (auto &c: subset) {
			cout << c << " ";
		}
		cout << '\n';
	}
	return 0;
}
