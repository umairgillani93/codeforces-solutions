#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<char> str;
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		str.push_back(a);
	}


	int c = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == str[i + 1]) {
			c++;
		}
		else {continue;}
	}
	cout << c << '\n';
	return 0;
}
