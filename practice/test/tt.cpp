#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n; 
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) cin >> a[i++];
	for (auto &s: a) cout << s << '\n';
	return 0;
}
