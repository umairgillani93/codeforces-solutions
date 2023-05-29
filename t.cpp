#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// n, k = 5, 2
// [2, 5, 1, 10, 6]
// for k = 1 .. 
// arr = [5, 6, 10]
// for k = 2..
// arr = [5, 6]
// sum = 11 is the right answer

long long sum(vector<int> &arr) {
	long long s = 0;
	for (int i = 0; i < arr.size(); i++) {
		s += arr[i];
	}

	return s;
}


int main() {
	int t;
	cin >> t;

	vector<long long> output;

	vector<pair<int, vector<int>>> M;
	
	for (int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		vector<int> V(n);
		
		for (int i = 0; i < n; i++) {
			cin >> V[i];
		}

		pair<int, vector<int>> p;

		p.first = k;
		p.second = V;
		M.push_back(p);

	}

	vector<long long> sums;


	for (int i = 0; i < M.size(); i++) {
		vector<int> arr = M[i].second;
		
		// sort the vector
		sort(arr.begin(), arr.end());

		// business logic starts
		for (int j = 0; j < M[i].first; j++) {
			if ((arr[0] + arr[1] < arr[arr.size() - 1])) {
				arr.erase(arr.begin());
				arr.erase(arr.begin());
			}

			else {
				arr.erase(arr.begin() + arr.size() -1);
			}

		}

		long long ans;
		ans  = sum(arr);
		output.push_back(ans);
		
}

	for (auto x: output) {
		cout << x << '\n';
	}
	return 0;
}

