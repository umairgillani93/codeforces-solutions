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
		while (!a.empty() && a.back() == 0) {
			a.pop_back();
		}
		reverse(a.begin(), a.end());
		while (!a.empty() && a.back() == 0) {
			a.pop_back();
		}
		if (a.empty()) {
			cout << 0 << '\n';
			continue;
		}
		bool zeros = false;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == 0) {
				zeros = true;
				break;
			}
		}
		cout << (zeros ? "2" : "1") << '\n';
	}
	return 0;
}
