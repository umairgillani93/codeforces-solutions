#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	long long res = n >= 31 ? m : m % (1 << n);
	cout << res << '\n';
	
	return 0;
}
