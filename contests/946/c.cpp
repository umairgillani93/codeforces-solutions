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
		
		 vector<vector<int>> t;
		 for (int i = 0; i < n - 2; i++) {
		 	vector<int> inner;
		 	inner.push_back(arr[i]);
		 	inner.push_back(arr[i + 1]);
		 	inner.push_back(arr[i + 2]);
		 	t.push_back(inner);
		 }

		long long ans = 0;

		for (int i = 0; i < t.size(); i++) {
			for (int j = i + 1; j < t.size(); j++) {
				int diff = 0;
				if (t[i][0] != t[j][0]) diff++;
				if (t[i][1] != t[j][1]) diff++;
				if (t[i][2] != t[j][2]) diff++;
				if (diff == 1) {
					ans++;
				}
			}
		}

		cout << ans << '\n';
	}
    
    return 0;
}

