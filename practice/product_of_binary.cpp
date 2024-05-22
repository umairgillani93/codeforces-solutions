#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 10 == n && (n % 10 == 0 || n % 10 == 1)) {
		cout << "YES" << '\n';
	}	
	return 0;
}
