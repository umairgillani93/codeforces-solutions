#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> arr(6);
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	int x;
	cin >> x;
	vector<int> svs(x);
	for (int j = 0; j < x; j++) {
		cin >> svs[j];
	}
	sort(svs.begin(), svs.end(), greater<int>());


	int a, b, c, d, e, f;
	a = arr[0];
	b = arr[1];
	c = arr[2];
	d = arr[3];
	e = arr[4];
	f = arr[5];

	int64_t coins_sum = a * 1 + b * 5 + c * 10 + d * 50 + e * 100 + f * 500;

	if (coins_sum == accumulate(svs.begin(), svs.end(), 0)) {
		cout << "YES" << '\n';
	}

	else if (coins_sum < accumulate(svs.begin(), svs.end(), 0)) {
		cout << "NO" << '\n';
	}

	else {

		for (int i = 0; i < svs.size(); i++) {
			int sv = svs[i];
			while (sv > 0) {
				if (sv >= 500) {
					sv %= 500;
					f -= sv / 500;

					if (f < 0) {
						cout << "no" << '\n';
						return 0;
					}

					if (sv < 0) {
						cout << "NO" << '\n';
						return 0;
					}
				}	
				else if (sv >= 100 && sv < 500) {
					sv %= 100;
					e -= sv /100;

					if (e < 0) {
						cout << "NO" << '\n';
						return 0; 
					}
					if (sv < 0) {
						cout << "NO" << '\n';
						return 0;
					}
				}

				else if (sv >= 50 && sv < 100) {
					sv %= 50;
					d -= sv / 50;
					if (d < 0) {
						cout << "NO" << '\n';
						return 0;
					}
					if (sv < 0) {
						cout << "NO" << '\n';
						return 0;
					}
				}
				
				else if (sv >= 10 && sv < 50) {
					sv %= 10;
					c -= sv / 10;
					if (c < 0) {
						cout << "NO" << '\n';
						return 0;
					}
					if (sv < 0) {
						cout << "NO" << '\n';
						return 0;
					}
				}	

				else if (sv >= 5 && sv < 10) {
					sv %= 5;
					b -= sv / 5;
					if (b < 0) {
						cout << "NO" << '\n';
						return 0;
					}
					if (sv < 0) {
						cout << "NO" << '\n';
						return 0;
					}
				}

				else {
					if (sv > a) {
						cout << "NO" << '\n';
						return 0;
					}
					if (sv < 0) {
						cout << "NO" << '\n';
						return 0;
					}
					// else {
					// 	cout << "yes" << '\n';
					// 	return 0;
					// }
				}
			}
		}
		cout << "YES" << '\n';
	}
	
	return 0;

}
