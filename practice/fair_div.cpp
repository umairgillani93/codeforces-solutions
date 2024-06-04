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
		
		auto OnesCount = [&](vector<int> &arr) {
			int c = 0;
			for (int i = 0; i < arr.size(); i++) {
				if (arr[i] == 1) {
					c++;
				}
			}
			return c;
		};

		auto TwosCount = [&](vector<int> &arr) {
			int c = 0;
			for (int i = 0; i < arr.size(); i++) {
				if (arr[i] == 2) {
					c++;
				}
			}
			return c;
		};

		int sum = accumulate(a.begin(), a.end(), 0);
		if (sum % 2 != 0) {
			cout << "NO" << '\n';
		}
		else {
			if (OnesCount(a) % 2 == 0 && OnesCount(a) != 0) {
				cout << "YES" << '\n';
			}
			else if (OnesCount(a) % 2 == 0 && OnesCount(a) == 0) {
				if (TwosCount(a) % 2 == 0) {
					cout << "YES" << '\n';
				}
				else {
					cout << "NO" << '\n';
				}
			}
		}
	}
	return 0;
}
