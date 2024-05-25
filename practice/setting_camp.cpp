#include <bits/stdc++.h>

using namespace std;

int main() {
using namespace std;
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		long long t = 0;
		if (a > 0 && b == 0 && c == 0) {
			t += a;
			cout << t << '\n';
			continue;
		}	
		else if (a == 0 && b == 0 && c == 0) {
			t = 0;
			cout << t << '\n';
			continue;
		}
		else if (a == 0 && b > 0 && c == 0) {
			if (b >= 3) {
				int r = b % 3;
				if (r == 0) {
					t = b / 3;
				}
				else {
					t = -1;
				}
			}
			else {
				t = -1;
			}
			
			cout << t << '\n';
			continue;
		}
		else if (a == 0 && b == 0 && c > 0) {
			if (c >= 3) {
				int r = c % 3;
				if (r == 0) {
					t = c / 3;
				}
				else {
					t = c / 3 + 1;
				}
			}
			else {
				t++;
			}
			cout << t << '\n';
			continue;
		}

		t += a;
		if (b >= 3) {
			int q = b / 3;
			t += q;
			int r = b % 3;
			if (r > 0) {
				t++;
				if (r == 1) {
					c -= 2;
					}
				else if (r == 2) {
					c--;
					}
				}
			if (c < 0) {
				cout << -1 << '\n';
				return 0;
			}
			else {
				if (c >= 3) {
					t += c / 3;
					int r = c % 3;
					if (r > 0) {
						t++;
					}

				}
				else if (c== 0) {
					t += 0;
				}
				else {
					t++;
				}
			}
		}
		else {
			t++;
			if (b == 1) {
				c -= 2;
				// cout << c << '\n';
			}
			else if (b == 2) {
				c--;
				// cout << c << '\n';
			}

			if (c < 0) {
				cout << -1 << '\n';
				return 0;
			}
			else {
				if (c >= 3) {
					t += c / 3;
					int r = c % 3;
					if (r > 0) {
						t++;
					}
				
				}
				else if (c == 0) {
					t += 0;
				}
				else {
					t++;
				}
			}
		
		}
		cout << t << '\n';
	}
	return 0;
		
}
