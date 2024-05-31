#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	if (arr[0] == 1) {
		cout << "YES" << '\n';
		return 0;
	}
	auto IsPrime = [&](int x) {
		if (x == 2) {
			return true;
		}
		else if (x == 3) {
			return true;
		}
		else {
			bool ok = true;
			for (int i = 2; i < x; i++) {
				if (x % i == 0) {
					ok = false;
					return ok;
				}	
			}
			return ok;
		}
	};

	int p_count = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (IsPrime(arr[i])) {
			p_count++;
			if (p_count >= 2 && arr.size() > 2) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	cout << "YES" << '\n';
	return 0;
}
