#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> resut = {1};

	// create a result vector to save all values in 
	vector<int> res;
	res.push_back(1);
	int carry = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < res.size(); j++) {
			int temp = res[j] * i;
			res[j] = (temp + carry) % 10;
			carry  = (temp + carry) / 10;
		}

		while (carry != 0) {
			res.push_back(carry % 10);
			carry = carry / 10;
		}
	}

	for (int i = res.size() - 1; i >= 0; i--) {
		cout << res[i] << "";
	}
	
	return 0;
}
