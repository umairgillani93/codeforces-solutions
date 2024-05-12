#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	long long size = s.size();
	long long den = pow(10, s.size() - 2);
	int q = stoll(s) / den;
	int r = stoll(s) % den;
	string new_q = to_string(q);
	string new_r = to_string(r);
	cout << den << '\n';
	cout << new_q << " " << new_r << '\n';

	auto Check = [&](string s) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '4' || s[i] == '7') {
				continue;
			}
			else {return false;}
		}
		return true;
	};

	if (Check(new_q) && Check(new_r)) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO" << '\n';
	}
	return 0;
}
