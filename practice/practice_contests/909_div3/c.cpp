#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	int curr = a[0];
	int best = a[0];
	if (n == 1) {
		cout << a[0] << '\n';
	}
	else {
		for (int i = 1; i < n; i++) {
			if (a[i] % 2 == a[i + 1] % 2) {
				curr = max(a[i], curr + (a[i]));
				best = max(best, curr);
			}
		}
		cout << best << '\n';
	}
	return 0;
}
