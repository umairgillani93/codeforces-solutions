#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int i = 0;
	int j = s.length() - 1;
	while (i <= j) {
		cout << s[i] << " " << s[j] << '\n';
		s[i] = s[j];
		i++;
		j--;
	}
	cout << s << '\n';
	return 0;
}
