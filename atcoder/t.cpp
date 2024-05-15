#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> arr = {0, 0, 6, 3, 4, 1};
	int x = 3;
	vector<int> svs = {700}; 

	int a, b, c, d, e, f;
	a = arr[0];
	b = arr[1];
	c = arr[2];
	d = arr[3];
	e = arr[4];
	f = arr[5];
	cout << "before: " <<  f << '\n';
	cout << "before: " <<  e << '\n';

	for (int i = 0; i < svs.size(); i++) {
		int sv = svs[i];
		while (sv > 0) {
			if (sv >= 500) {
				sv %= 500;
				f -= sv / 500;
				cout << sv << '\n';
				cout << f << '\n';

				if (f < 0) {
					cout << "NO" << '\n';
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
				cout << sv << '\n';
				cout << e << '\n';

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
				cout << sv << '\n';
				cout << "d: " << e << '\n';
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
				cout << sv << '\n';
				cout << "c: " << e << '\n';
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
				cout << sv << '\n';
				cout << "b: " << e << '\n';
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
	
	return 0;

}
