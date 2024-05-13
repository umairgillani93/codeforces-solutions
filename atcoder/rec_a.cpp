#include <bits/stdc++.h>

using namespace std;

bool sol(vector<int> &coins, vector<int> &stores) {
	// int a, b, c, d, e, f;
    // a = coins[0];
    // b = coins[1];
    // c = coins[2];
    // d = coins[3];
    // e = coins[4];
    // f = coins[5];
	
	for (int i = 0; i < x; i++) {
		int store = stores[i];

		if (store == 0 && (accumulate(coins.begin(), coins.end(), 0) >= 0)) {
			return true;
		}	
		else {
			
			for (int i = 0; i < x; i++) {
				int store = stores[i];
				if (store >= 500) {
					store %= 500;
					coins[5] /= 500;	

					if (coins[5] < 0 || store < 0) {
						return false;
					}
				}

				else if (store >= 100 && store < 500) {
					store %= 100;
					coins[4] /= 100;

					if (coins[4] < 0 || store < 0) {
						return false;
					}
				}
			}
			return sol(coins, store);

	}

	
	}

}

int main() {
	vector<int> coins = {20, 5, 9, 7, 10, 6};
	// int x = 5;
	// vector<int> stores = {177, 177, 177, 177, 177};
	int x = 700;

	bool ans = sol(coins, x);

	cout << ans << '\n';
	return 0;
}
