#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
		// since ((a + b) % a) == b for 0 <= b < a
        int n;
        cin >> n;
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> x[i];
        }
        vector<long long> a;
		a.push_back(1000);
		// int k = 1;
		for (int i = 0; i < x.size(); i++) {
			long long val = a.back() + x[i];
			a.push_back(val);
		}
		for (auto &c : a) {
			cout << c << " ";
		}
		cout << '\n';
	}
	return 0;
}


