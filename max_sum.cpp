#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long sum(vector<int> &v) {
	long long s = 0;
	for (int i = 0; i < v.size(); i++) {
		s += v[i];
	}

	return s;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> N(n);
		for (int i = 0; i < n; i++) {
			cin >> N[i];
		}

		for (int j = 0; j < N.size(); j++) {
			cout << N[j] << '\n';
		}
	}

	return 0;
}

//int main() {
//	int t;
//	cin >> t;
//
//	// test cases -> t
//	// numbers n, k ->
//	// n - length array [1, 2, 3 ,4 ... n]
//	// k -> number of moves
//	// each time we'll check if two minis are smaller than max
//	// then we'll remove two minis 
//	// other-wise we'll remove one max to get the best sum
//	
//
//	vector<long long> final;
//
//	for (int i = 0; i < t; i++) {
//		int n, k;
//		cin >> n >> k;
//
//		vector<int> v(n);
//
//		for (int i = 0; i < k; i++) {
//			cin >> v[i];
//		}
//
//		for (auto x: v) {
//			cout << x << '\n';
//		}
//		cout << '\n';
//	}
//
//	return 0;
//
//}



// t = 1;
// n, k = 5, 1;
// n = [2, 5, 1, 10, 6]
// sorted n = [1, 2, 5, 6, 10]
// k = 1; 1 + 2 < 10; k = [5, 6, 10]
// 5 + 6 + 10 = 21 right answer



