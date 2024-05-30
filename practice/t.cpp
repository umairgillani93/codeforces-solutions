#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
		if (a[0] != a[1]) {
			cout << "YES" << '\n';
		}
		else {
			bool check = false;
			for (int i = 1; i < n; i++) {
				if (a[i] % a[0] != 0) {
					check = true;
				}
			}
			if (check == true) {
				cout << "YES" << '\n';
			}
			else {
				cout << "NO" << '\n';
			}
			
		}
	}
	return 0;
}

