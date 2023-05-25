#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> &arr) {
	int s = 0;
	for (int i = 0; i < arr.size(); i++) {
		s += arr[i];
	}

	return s;
	
}

int main() {
	vector<int> v = {1,2,3,4,5};
	int ss = sum(v);
	cout << ss << '\n';
	return 0;
	
}

// 6, 2
// 15 22 12 10 13 11
// 10 11 12 13 15 22
// for k = 1..
// 10 + 11 < 22
// arr = {12, 13, 15, 22}
// for k = 2..
// {12, 13, 15}
// 12 + 13 + 15 = 40


