#include <bits/stdc++.h>

using namespace std;

int bin_search(vector<int> v, int x) {

	sort(v.begin(), v.end());
	int mid;
	mid = floor(v.size() / 2);

	vector<int> left;
	vector<int> right;

	for (int i = 0; i < mid; i++) {
		left.push_back(v[i]);
	}

	for (int i = mid; i <= v.size(); i++) {
		right.push_back(v[i]);
	}

	if (v[mid] == x) {
		return mid;
	}

	else if (v[mid] < x) {
		bin_search(right, x);
	}	

	else {
		bin_search(left, x);
	}
}

int main() {
	// binary search implementation
	int n;
	cin >> n;
	int x;
	cin >> x;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	bin_search(v, x);

	return 0;
}
