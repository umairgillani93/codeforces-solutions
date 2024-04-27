#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int l = 0;
		int r = 0; 
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] != i + 1) {
				int left = i;
			}
			
			for (int j = i + 1; j < n; j++) {
				if (arr[j] == arr[i]) {
					int right = j;
					break;
				}	
			}	

			cout << l << " " << r << '\n';
		}

	}

	return 0;

}

