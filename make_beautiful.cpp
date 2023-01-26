#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		int sum = 0; 
		for (int j = 0; j < i; j++) {
			sum += arr[j];
		}
		if (sum == arr[i]) {
			return true;
		}
		else {continue;}
	}	

	return false;
}

int main() {
	int size;
	cin >> size;
	vector<vector<int>> outer;

	for (int i = 0; i < size; i++) {
		int a;
		cin >> a;
		vector<int> inner;
		for (int i = 0; i < a; i++) {
			int t;
			cin >> t;
			inner.push_back(t);
		}
		outer.push_back(inner);
	}

	for (int i = 0; i < outer.size(); i++) {
		bool ok;
		ok = is_beautiful(outer[i]);
		if (ok == true) {
			if (outer[i].size() == 2) {
				cout << "NO" << '\n';
			}
		else {
			cout << "YES" << '\n';
		}
		}
	}

	return 0;
}
