#include <bits/stdc++.h>

using namespace std;

#define MX 1e9

int min_element(vector<int> arr) {
	int mn = MX;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < mn) {
			mn = arr[i];
		}
	}
	return mn;
}

int main() {
	int n; 
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool found = false;
	int start = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i + 1] - a[i] > 1) {
			start = i + 1;
			found = true;
			break;
		}
	}
	vector<int> arr;
	for (int i = start; i < a.size(); i++) {
		arr.push_back(a[i]);
	}
	
	int res = 0;
	if (found) {
		int res = min_element(arr);	
	}
	cout << res << '\n';
	return 0;
}	

