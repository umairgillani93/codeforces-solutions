// Maximum sum subarray of 'K' distinct elements
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {2, 7, 11, 15};
	int x = 9;
	set<int> pref;
	int n = arr.size();
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (pref.find(sum - x) != pref.end()) {
			cout << "yes"
		}
	}
		
	return 0;
}
