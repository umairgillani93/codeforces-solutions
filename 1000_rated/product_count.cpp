#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;;
		string x, s;
		cin >> x >> s;

		if (x.find(s) != string::npos) {
			cout << 0 << '\n';
			continue;
		}

		bool found = false;
		int op = 0;
		while (true) {
			x += x;
			op++;
			if (x.find(s) != string::npos) {
				found = true;
				break;
			}
			else {
				n = x.size();
				if (n >= 100) {
					break;
				}
			}
		}
		if (found) {
			cout << op << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}
	return 0;
}
