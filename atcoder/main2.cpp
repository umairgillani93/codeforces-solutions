#include <bits/stdc++.h>

using namespace std;

bool IsPalin(string &s, int start, int end) {
	 if (start >= end) {
	 	return true;
	 }

	if (s[start] != s[end]) {
		return false;
	}
	else {
		return IsPalin(s, start + 1, end - 1);
	}
}

int main() {
	string s;
	cin >> s;
	int start = 0;
	int end = s.size() - 1;
	bool res = IsPalin(s, start, end);
	cout << res << '\n';
	return 0;

}
