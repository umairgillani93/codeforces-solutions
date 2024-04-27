#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		string new_s = s.substr(i, s.size());
		sort(new_s.begin(), new_s.end());
		cout << new_s << '\n';
	}

	return 0;
}
