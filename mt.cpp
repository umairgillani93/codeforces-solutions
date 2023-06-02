#include <bits/stdc++.h>

using namespace std;

int main() {

	int x, y;
	cin >> x >> y;
	
	int LCM = (x * y) / __gcd(x, y);

	cout << LCM << '\n';

	return 0;

}
