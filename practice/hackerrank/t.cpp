#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> res = {1};
	int carry = 0;
	for (int i = 1; i <= n; i++) {
		int temp = res[i] * i;
		res[i] = temp + carry % 10;
		carry = temp + carry / 10;
	}

	while (carry != 0) {
		carry = carry % 10;
		carry  carry / 10;
	}

	for (int i = res.size() - 1; i >= 0; i--) {
		cout << res[i] << "";
	}

	return 0;
}
