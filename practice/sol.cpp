#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;

		set<char> new_s;
		for (int i = 0; i < s.size(); i++) {
			new_s.insert(s[i]);
		}
		string tmp = "";
		for (auto &c: new_s) {
			tmp += c;
		}

		string a;
		for (int i = 0; i < s.size(); i++) {
			a += tmp[tmp.size() - 1 - tmp.find(s[i])];
		}
		cout << a << '\n';
	}

	return 0;

}
		
