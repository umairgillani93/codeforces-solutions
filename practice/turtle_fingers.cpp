#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, l;
		cin >> a >> b >> l;
		int i = 0;
		vector<int> x_range;
		vector<int> y_range;

		while (true) {
			if (pow(a, i) <= l) {
				x_range.push_back(i);
				i++;
			}
			else {
				break;
			}
		}
		int j = 0;
		while (true) {
			if (pow(b, j) <= l) {
				y_range.push_back(j);
				j++;
			}
			else {
				break;
			}
		}

		int ans = 0;
		set<int> k_set;
		for (int i = 0; i < y_range.size(); i++) {
			for (int j = 0; j < x_range.size(); j++) {
				int num = l;
				int denom = pow(a, x_range[j]) * pow(b, y_range[i]);
				int k = num / denom;
				// k_set.insert(k);
				if (num / denom <= l && num % denom == 0) {
					k_set.insert(k);
				}
			}
		}
		cout << k_set.size() << '\n';
	}

	return 0;
		
}
