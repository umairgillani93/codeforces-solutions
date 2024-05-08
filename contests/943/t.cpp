#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string a;
		cin >> a;
		string b;
		cin >> b;
		int ans = 0;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == b[i]) {
				while (i < a.size() || i < b.size()) {
					if (a[i] == b[i]) {
						cout << a[i] << " "  << b[i] << '\n';
						cout << a.size() << " " <<  b.size() << '\n';
						ans++;
						i++;
					}
					else{
						i++;
					}
				}
			}
			break;	
		}
		cout << ans << '\n';
	}
	return 0;
}
