#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int b = 0; b < (1 << n); b++) {
		vector<int> subset;
		for(int i = 0; i < n; i++) {
			if (b & (1 << i)) {
				subset.push_back(i);
			}
		}
		for (auto c: subset) {
			cout << c << " ";
		}
		cout << '\n';
	}
	return 0;
}

