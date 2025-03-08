#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	string s;
		cin >> s;
		int zeros = count(s.begin(), s.end(), '0');
		int ones = count(s.begin(), s.end(), '1');
		//cout << zeros << " " << ones << '\n';

		if (s.size() == 1) {
			cout << 1 << '\n';
			continue;
		}	
		if (zeros == ones) {
			cout << 0 << '\n';
			continue;
		}
		
		if (zeros != ones && s.size() % 2 == 0) {
			cout << max(zeros, ones) << '\n';
		}
		else {
			cout << abs(zeros - ones) << '\n';
		}

	}
	return 0;
}
