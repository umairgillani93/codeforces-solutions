#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {

		int a, b;
		cin >> a >> b;
		string x;
		cin >> x;
		string y;
		cin >> y;
		bool done = false;
		int ans = 0;
		
		if (x.find(y) != string::npos) {
			cout << ans << '\n';
		}
		else {
			while (!done) {
				if (x.find(y) != string::npos) {
					// cout << "yes" << '\n';
					done = true;
				}
				else {
					ans++;
					x += x;
					if (x.length() >= 100) {
						break;
					}
				}
			}
			if (done == false) {
				cout << -1 << '\n';
			}
			else {
				cout << ans << '\n';
			}
		}
	}

	//if (done == false) {
	//	cout << "NO" << '\n';
	//}
	return 0;
}
