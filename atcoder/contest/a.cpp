#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	unordered_map<char, int> mp;
	for (int i = 0; i < s.length(); i++) {
		mp[s[i]]++;
	}
	vector<int> c;
	//for (auto it = mp.begin(); it != mp.end(); it++) {
	//	c.push_back(it -> second);
	//}
	for (auto &k : c) {
		cout << k << '\n';
	}
	return 0;
}
