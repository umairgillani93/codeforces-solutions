#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	auto Ispalindrome = [&](string s) {
		int i = 0;
		int j = s.size() - 1;
		while (i < j) {
			if (s[i] == s[j]) {
				i++;
				j--;
			}

			else {
				return false;
			}
		}
		return true;
	};


	auto check = Ispalindrome(s);
	cout << check << '\n';
	return 0;
	
}

