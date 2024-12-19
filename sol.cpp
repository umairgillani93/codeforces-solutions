#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &arr, int l) {
	// first number in arr greater than 'l'
	int lo = 0;
	int hi = arr.size() - 1;
	int res = 0;
	
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		if (arr[mid] >= l) {
			res = arr[mid];
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}
	return res;

}
int main() {
	vector<int> arr = {2,1,5,3};
	sort(arr.begin(), arr.end());
	int l = 4;
	int res = search(arr, l);
	cout << res << '\n';
	return 0;
		
}


