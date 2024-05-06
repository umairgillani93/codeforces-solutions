#include <bits/stdc++.h>

using namespace std;

bool Check(string s, int start, int end) {
	if (start >= end) {
		return true;
	}
	
	if (s[start] != s[end]) {
		return false;
	}

	else {
		return Check(s, start + 1, end - 1);
	}
}


int main() {
	string s;
	cin >> s;
	bool c = Check(s, 0, s.size() - 1);
	cout << c << '\n';
	return 0;

}
