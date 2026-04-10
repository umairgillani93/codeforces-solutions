#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		unordered_map<int, int> freq;
		int i = 0;
		int max_i = 0, max_j = 0;
		for (int j = 0; j < n; j++) {
			freq[a[j]]++;
			while (freq[a[j]] > 1) {
				freq[a[i]]--;
				i++;
			}

			if (j - i + 1 > max_j - max_i + 1) {
				max_j = j;
				max_i = i;
			}

		}
		cout << max_j + 1 << " " << max_i + 1 << '\n';
	}

	return 0;
}
	
