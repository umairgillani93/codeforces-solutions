#include <bits/stdc++.h>
using namespace std;

int main() {
	// create an array that has length (n + 2)
	// b[k] = 1; b[i] = 0;
	// b[0] = 1, b[n + 1] = 1;
	//
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr(n + 2);
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		//cout << "n: " << n << " vector size: " << arr.size() << '\n';
		int p;
		cin >> p;
		// create an array of size n + 2;
		
		arr[0] = arr[n + 1] = arr[p];
			
		int l = 0, r = 0;
		for(int i = 0; i < p; i++) {
			if (arr[i] != arr[i + 1]) l++;
		}

		for(int i = p; i < n + 1; i++) {
			if (arr[i] != arr[i + 1]) r++;
		}
		cout << max(l, r) << '\n';
	}
	return 0;
}
