#include <bits/stdc++.h>

using namespace std;

int sol() {
	vector<int> coins = {0, 0, 6, 3, 4, 1};
	int stores = 3;
	vector<int> store_values = {700, 250, 160};

	sort(store_values.begin(), store_values.end(), greater<int>());
	for (int i = 0; i < store_values.size(); i++) {
		while (store_value[i] > 0) {
			if (store_values[i] >= 500) {
				store_values[i] %= 500;
				f -= store_value[i] / 500;

				if (f < 0) {
					cout << "NO" << '\n';
					return 0;
				}
			}
			else if (store_values[i] >= 100 && store_values[i] < 500) {
				store_values[i] %= 500;
				e -= store_value[i] / 500;

				if (e < 0) {
					cout << "NO" << '\n';
					return 0; 
				}
			}
			else if (store_values[i] >= 50 && store_values[i] < 100) {
				store_values[i] %= 500;
				d -= store_value[i] / 500;

				if (d < 0) {
					cout << "NO" << '\n';
					return 0; 
				}
			}
			else if (store_values[i] >= 500) {
				store_values[i] %= 500;
				f -= store_value[i] / 500;

				if (f < 0) {
					cout << "NO" << '\n';
					return 0;
				}
			}
			else if (store_values[i] >= 500) {
				store_values[i] %= 500;
				f -= store_value[i] / 500;

				if (f < 0) {
					cout << "NO" << '\n';
					return 0;
				}
			}

	}

	return 0;
}

int main() {
	int res = sol();
	cout << res << '\n';
	return 0;
}
