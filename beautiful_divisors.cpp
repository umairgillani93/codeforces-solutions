#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	auto b = [&](int n) {
		string b = "";
		while (n > 0) {
			b += to_string(n % 2);
			n /= 2;
		}
		reverse(b.begin(), b.end());
		if (b == "10") {
			return false;
		}

		int lo = 0;
		int hi = b.size() - 1;
		int mid = lo + (hi - lo) / 2;
		int ones = 0;
		int zeros = 0;

		for (int i = 0; i <= mid; i++) {
			if (b[i] != '1') {
				return false;
			}
			ones++;
		}

		for (int j = mid + 1; j < b.size(); j++) {
			if (b[j] != '0') {
				return false;
			}
			zeros++;
		}
		if (ones == zeros + 1) {
			return true;
		}
		else {
			return false;
		}
	};

	for (int i = n; i >= 1; i--) {

		if (b(i) == true && n % i == 0) {
			cout << i << '\n';
			return 0;
		}
	}

	return 0;

}
