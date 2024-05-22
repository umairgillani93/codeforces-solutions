#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 10;
	string s1 = "##";
	string s2 = "..";
	vector<string> p;
	for (int i = 0; i < n / 2; i++) {
		p.push_back(s1);
		p.push_back(s2);
	}
	for (auto &s: p) {
		cout << s << " ";
	}
	cout << '\n';
	return 0;
}
