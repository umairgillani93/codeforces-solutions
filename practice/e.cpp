#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 4;
	vector<int> arr = {5, 3, 7, 8, 5};
	sort(arr.begin(), arr.end());
	cout << *lower_bound(arr.begin(), arr.end(), n) << '\n';
	return 0;
}
