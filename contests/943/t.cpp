#include <bits/stdc++.h>

using namespace std;

bool IsSub(string &x, string &y) {
	// a string y is substring of x or not
	// substring an only be possible if y.size <= x.size
	// let's first calculate y.size()
	// now for each i in x, check indices x[i]... x[i + y.size()] 
	// if it's equal to y return true
	// else return false
	
	int i = 0;
	int start = 0;
	int end = y.size();
	bool ok = false;
	while (i <= x.size() && end <= x.size()) {
		if (x.substr(start, end) == y) {
			ok = true;
			return true;
		}

		else {
			i++;
			start += y.size();
			end += y.size();
		}
	}
	return false;

}

int main() {
	string x, y;
	cin >> x >> y;
	bool ans = IsSub(x, y);
	cout << ans << '\n';
	return 0;

}

